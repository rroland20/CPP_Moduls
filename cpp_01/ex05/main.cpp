#include "Karen.hpp"

int	main() {
	Karen k;
	std::string str;

	std::cout << "Please, enter the command(DEBUG, INFO, WARNING, ERROR): ";
	getline(std::cin, str);
	k.complain(str);
}