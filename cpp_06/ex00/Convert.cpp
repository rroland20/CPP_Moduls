#include "Convert.hpp"

Convert::Convert(const std::string &str)
	: _str(str), _char(0), _int(0), _float(0.0f), _double(0.0) {
	switch (typeDefinition())
	{
		case 0:
			printNanInf();
			break;
		case -1:
			throw NotNum();
		default:
			_double = std::atof(str.c_str());
			castChar();
			castInt();
			castFloat();
			castDouble();
	}

}

Convert::Convert(const Convert& copy) { *this = copy; }

Convert	&Convert::operator=(const Convert& other) {
	if (this != &other) {
		_str = other._str;
		_char = other._char;
		_int = other._int;
		_float = other._float;
		_double = other._double;
	}
	return (*this);
}

Convert::~Convert() {}

int Convert::typeDefinition() {
	if (_str == "nan" || _str == "nanf" || _str == "-inf" || _str == "+inf" || _str == "-inff" || _str == "+inff")
		return 0;
	for (unsigned long i = 0; i < _str.length(); ++i)
		if (_str[i] > '9' || _str[i] < '0')
			if (_str[i] != '.' && _str[i] != 'f')
				return -1;
	if (static_cast<int>(_str.find("f")) != -1 && (_str[_str.length() - 1] != 'f' || _str.rfind("f") != _str.find("f") || static_cast<int>(_str.find(".")) == -1))
		return -1;
	return 2;
}

void Convert::printNanInf() {
	_double = std::atof(_str.c_str());
	std::cout << "char: imposible" << std::endl;
	std::cout << "int: imposible" << std::endl;
	std::cout << "float: " << static_cast<float>(_double) << "f" << std::endl;
	std::cout << "double: " << _double << std::endl;
}

void Convert::castChar() {
	if (_double <= 32 || _double >= 127)
		if (_double < 0 || _double > 128)
			std::cout << "char: imposible" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	else {
		_char = static_cast<char>(_double);
		std::cout << "char: \'" << _char << "\'" << std::endl;
	}
}

void Convert::castInt() {
	if (std::atol(_str.c_str()) < INT32_MIN || std::atol(_str.c_str()) > INT32_MAX)
		std::cout << "int: imposible" << std::endl;
	else {
		_int = static_cast<int>(std::atoi(_str.c_str()));
		std::cout << "int: " << _int << std::endl;
	}
}

void Convert::castFloat() {
	if (_double - floor(_double) > 0.0f)
		std::cout << "float: " << std::setprecision(15) << _double << "f" << std::endl;
	else
		std::cout << "float: " << std::setprecision(15) << _double << ".0f" << std::endl;
}

void Convert::castDouble() {
	if (_double - floor(_double) > 0.0f)
		std::cout << "double: " << std::setprecision(15) << _double << std::endl;
	else
		std::cout << "double: " << std::setprecision(15) << _double << ".0" << std::endl;
}

Convert::NotNum::NotNum() {}
const char* Convert::NotNum::what() const throw () { return "Value is not a number!"; }