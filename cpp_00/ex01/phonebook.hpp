#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "contact.hpp"

class Phone
{
	private:
		Contact cont[8];
	void	checkLength(std::string str) {
		if (str.length() > 10)
			std::cout << str.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << str << "|";
	}
	public:
	void	setContact(const Contact & contt, int i);
	void	headerContact(void);
	void	getTable(int i);
	void	getIndex(int i);
};

#endif