#include "Convert.hpp"

Convert::Convert(const std::string &str)
	: _str(str), _char(0), _int(0), _float(0.0f), _double(0.0) {
	switch (typeDefinition())
	{
	case 0:
		printNan();
		break;
	case 1:
		if (_str[0] == '+')
			printInf(1);
		else
			printInf(0);
		break ;
	case -1:
		throw NotNum();
	default:
		_double = std::atof(str.c_str());
		// std::cout << _double << std::endl;
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
	if (_str == "nan" || _str == "nanf")
		return 0;
	else if (_str == "-inf" || _str == "+inf" || _str == "-inff" || _str == "+inff")
		return 1;
	for (unsigned long i = 0; i < _str.length(); ++i)
		if (_str[i] > '9' || _str[i] < '0')
			if (_str[i] != '.' && _str[i] != 'f')
				return -1;
	if (static_cast<int>(_str.find("f")) != -1 && (_str[_str.length() - 1] != 'f' || _str.rfind("f") != _str.find("f") || static_cast<int>(_str.find(".")) == -1))
		return -1;
	return 2;
}

void Convert::printNan() {
	std::cout << "char: imposible" << std::endl;
	std::cout << "int: imposible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void Convert::printInf(int i) {
	std::cout << "char: imposible" << std::endl;
	std::cout << "int: imposible" << std::endl;
	if (i) {
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else {
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
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
	float tmp;

	tmp = ceil(_double * 10) / 10.0f;
	if (int(tmp * 10) % 10 == 0)
		std::cout << "float: " << _double << ".0f" << std::endl;
	else
		std::cout << "float: " << _double << "f" << std::endl;
}

void Convert::castDouble() {
	float tmp;

	tmp = ceil(_double * 10) / 10.0f;
	if (int(tmp * 10) % 10 == 0)
		std::cout << "double: " << _double << ".0" << std::endl;
	else
		std::cout << "double: " << _double << std::endl;
}

Convert::NotNum::NotNum() {}
const char* Convert::NotNum::what() const throw () { return "Value is not a number!"; }