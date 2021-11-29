#include "Convert.hpp"

int main(int ac, char **av) {
	if (ac == 2) {
		try {
			Convert str(av[1]);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
}