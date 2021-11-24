#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	Animal *arr[4];
	
	for (size_t i = 0; i < 4; i += 2) {
		arr[i] = new Dog();
		arr[i + 1] = new Cat();
	}
	for (size_t i = 0; i < 4; ++i) {
		delete arr[i];
	}
}

// int main() {
// 	Dog basic;
// 	{
// 		Dog tmp = basic;
// 	}
// }