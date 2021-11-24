#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	_brain = new Brain();
	std::cout << "Cat    contructor called!" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal("Cat") {
	std::cout << "Cat    copy contructor called!" << std::endl;
	*this = copy;
}

Cat	&Cat::operator=(const Cat& other) {
	if (this != &other) {
		this->_type = other._type;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat    destructor called!" << std::endl;
	delete _brain;
}

void Cat::makeSound() const {
	std::cout << Animal::_type << " say meow!" << std::endl;
}
