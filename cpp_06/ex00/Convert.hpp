#pragma once

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#include <stdint.h>

class Convert {
private:
	std::string _str;
	char _char;
	int _int;
	float _float;
	double _double;
	long int _long;
	Convert();
public:
	Convert(const std::string &str);
	Convert(const Convert& copy);
	Convert	&operator=(const Convert& other);
	virtual ~Convert();

	int typeDefinition();
	void printNanInf();
	void print();
	void castChar();
	void castInt();
	void castFloat();
	void castDouble();

	class NotNum : public std::exception {
	public:
		NotNum();
		const char* what() const throw ();
		~NotNum() throw () {}
	};
};
