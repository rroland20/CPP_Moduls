#include "phonebook.hpp"
#include "contact.hpp"

int	get_str(std::string *str, int k) {
	std::getline(std::cin, *str);
	if (std::cin.eof() && k == 1)
		return (1);
	return (0);
}

Contact	add_cont(Contact contact, std::string add) {
	std::cout << "Write firstname: ";
	get_str(&add, 0);
	if (add.empty())
		throw "Empty first name!";
	contact.setFirstname(add);
	std::cout << "Write lastname: ";
	get_str(&add, 0);
	if (add.empty())
		throw "Empty last name!";
	contact.setLastname(add);
	std::cout << "Write nickname: ";
	get_str(&add, 0);
	if (add.empty())
		throw "Empty nickname!";
	contact.setNickname(add);
	std::cout << "Write number: ";
	get_str(&add, 0);
	if (add.empty())
		throw "Empty phone number!";
	contact.setNumber(add);
	std::cout << "Write dark secret: ";
	get_str(&add, 0);
	if (add.empty())
		throw "Empty darkest secret!";
	contact.setSecret(add);
	std::cout << "\e[32m" << "<<<SUCCESSFULLY!>>>" << "\e[0m" << std::endl;
	return (contact);
}

int	main() {
	std::string add;
	std::string comm = "";
	Contact		contact;
	Phone		phonebook;
	int			i = 0;
	int			l = 0;
	int			index;

	while (comm != "EXIT") {
		std::cout << "Write command: ";
		if (get_str(&comm, 1))
			return 0;
		if (comm == "ADD")
		{
			try {
				phonebook.setContact(add_cont(contact, add), i);
				i++;
				if (l != 8)
					l++;
			}
			catch(const char *ex) {
				std::cout << ex << std::endl;
			}
		}
		else if (comm == "SEARCH") {
			phonebook.headerContact();
			for (int k = 0; k < l; k++) {
				phonebook.getTable(k);
			}
			std::cout << "Please, enter the index: ";
			get_str(&add, 0);
			index = atoi(add.c_str());
			if (index > 0 && index <= l){
				phonebook.getIndex(index);
			}
			else
				std::cout << "Wrong input, try again." << std::endl;
		}
		else if (comm != "EXIT")
			std::cout << "Please, enter the command" << std::endl;
		if (i == 8) {
			l = 8;
			i = 0;
		}
	}
	return (0);
}