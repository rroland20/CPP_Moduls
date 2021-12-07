#include "iter.hpp"

int main() {
	int num[4];

	num[0] = 1;
	num[1] = 2;
	num[2] = 3;
	num[3] = 4;
	iter(num, 4, func);
	std::cout << std::endl;

	std::string str[2];

	str[0] = "abc";
	str[1] = "def";
	iter(str, 2, func);
}
