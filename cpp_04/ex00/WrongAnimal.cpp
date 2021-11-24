#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("it") {}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal type contructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	std::cout << "WrongAnimal copy contructor called!" << std::endl;
	*this = copy;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal call destructor!" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << _type << " say smth" << std::endl;
}

std::string WrongAnimal::getType() const { return _type; }
