#include "phonebook.hpp"

void Phone::setContact(const Contact & contt, int i) {
	cont[i].setFirstname(contt.getFirstname());
	cont[i].setLastname(contt.getLastname());
	cont[i].setNickname(contt.getNickname());
	cont[i].setNumber(contt.getNumber());
	cont[i].setSecret(contt.getSecret());
}

void Phone::headerContact(void) {
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|  index   |first name| last name| nickname |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}

void Phone::getTable(int i) {
	std::cout << "|" << std::setw(9) << "Contact " << i + 1 << "|";
	checkLength(cont[i].getFirstname());
	checkLength(cont[i].getLastname());
	checkLength(cont[i].getNickname());
	std::cout << std::endl << "|__________|__________|__________|__________|" << std::endl;
}

void	Phone::getIndex(int i) {
	i--;
	std::cout << "First name: " << cont[i].getFirstname() << std::endl;
	std::cout << "Last name: " << cont[i].getLastname() << std::endl;
	std::cout << "Nickname: " << cont[i].getNickname() << std::endl;
	std::cout << "Phone number: " << cont[i].getNumber() << std::endl;
	std::cout << "Darkest secret: " << cont[i].getSecret() << std::endl;
}