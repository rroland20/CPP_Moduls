#include "Serialization.hpp"

int main() {
	Data data;
	Data *n;
	uintptr_t c;

	data.num = 10;
	data.str = "Hello";
	c = serialize(&data);
	n = deserialize(c);
	std::cout << n->num << std::endl << n->str << std::endl;
}