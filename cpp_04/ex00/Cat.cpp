#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat contructor called!" << std::endl;
}

Cat::Cat(const Cat& copy) {
	std::cout << "Animal copy contructor called!" << std::endl;
	*this = copy;
}

Cat	&Cat::operator=(const Cat& other) {
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound() const {
	std::cout << Animal::_type << " say meow!" << std::endl;
}
