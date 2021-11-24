#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog contructor called!" << std::endl;
}

Dog::Dog(const Dog& copy) {
	std::cout << "Animal copy contructor called!" << std::endl;
	*this = copy;
}

Dog	&Dog::operator=(const Dog& other) {
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called!" << std::endl;
}

void Dog::makeSound() const {
	std::cout << Animal::_type << " say woof!" << std::endl;
}
