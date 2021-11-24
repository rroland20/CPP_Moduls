#include "Animal.hpp"

Animal::Animal() : _type("It") {
	std::cout << "Animal default contructor called!" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal type contructor called!" << std::endl;
}

Animal::Animal(const Animal& copy) {
	std::cout << "Animal copy contructor called!" << std::endl;
	*this = copy;
}

Animal	&Animal::operator=(const Animal& other) {
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called!" << std::endl;
}

void Animal::makeSound() const {
	std::cout << _type << " say smth" << std::endl;
}

std::string Animal::getType() const { return _type; }
