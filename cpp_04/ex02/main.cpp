#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	Animal *arr[10];
	
	for (size_t i = 0; i < 5; i += 2) {
		arr[i] = new Dog();
		arr[i]->makeSound();
		arr[i + 1] = new Cat();
		arr[i + 1]->makeSound();
	}
	for (size_t i = 0; i < 10; ++i) {
		delete arr[i];
	}
}

// int main()
// {
// 	Animal *a = new Animal();
// }
