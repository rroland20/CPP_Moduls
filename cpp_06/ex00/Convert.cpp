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
		castChar();
		castInt();
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
	else if (!(_str.find('f', _str[_str.length() - 1])) && !(_str.find('.')))
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
	if (std::atoi(_str.c_str()) <= 32 || std::atoi(_str.c_str()) >= 127)
		std::cout << "char: Non displayable" << std::endl;
	else {
		_char = static_cast<float>(std::atoi(_str.c_str()));
		std::cout << "char: \'" << _char << "\'" << std::endl;
	}
}

void Convert::castInt() {
	std::cout << "asdasd - " << std::isdigit(static_cast<unsigned char>(_str[0])) << std::endl;
	if (std::atoi(_str.c_str()) < -2147483648 || std::atoi(_str.c_str()) > 2147483647)
		std::cout << "int: imposible" << std::endl;
	else {
		_int = static_cast<float>(std::atoi(_str.c_str()));
		std::cout << "int: " << _int << std::endl;
	}
}

void Convert::castFloat() {

}

void Convert::castDouble() {

}


void Convert::print() {
	std::cout << "char: \'" << _char << "\'" << std::endl;
	std::cout << "float: " << _float << std::endl;
	std::cout << "double: " << _double << std::endl;
}

Convert::NotNum::NotNum() {}
const char* Convert::NotNum::what() const throw () { return "Value is not a number!"; }