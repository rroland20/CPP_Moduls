#include "Animal.hpp"


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

std::string Animal::getType() const { return _type; }
