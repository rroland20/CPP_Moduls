#include "Karen.hpp"

int main(int ac, char **av) {
	Karen k;

	switch (ac) {
		case 2:
			k.complain(av[1]);
			break;
		default:
			k.complain("err");
			break;
	}
	return 0;
}