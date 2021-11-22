#include <iostream>
#include <cctype>

int main(int ac, char **av) {
	int i = 0, j;

	if (ac > 1){
		while(av[++i]) {
			j = -1;
			while(av[i][++j])
				av[i][j] = toupper(av[i][j]);
			std::cout << av[i];
			if (av[i + 1])
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
