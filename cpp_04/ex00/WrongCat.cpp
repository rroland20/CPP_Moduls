#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat") {
	std::cout << "WrongCat contructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) {
	std::cout << "WrongCat copy contructor called!" << std::endl;
	*this = copy;
}

WrongCat	&WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat call destructor!" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << WrongAnimal::_type << " say meow!" << std::endl;
}
