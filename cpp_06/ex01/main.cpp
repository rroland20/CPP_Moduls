#include "Serialization.hpp"

int main() {
	Data data;
	Data *n;
	uintptr_t c;

	data.a = 10;
	data.b = 15;
	c = serialize(&data);
	std::cout << &c << std::endl;
	n = deserialize(c);
	std::cout << n->a << std::endl << n->b << std::endl;
}