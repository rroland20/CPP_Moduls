#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog    contructor called!" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal("Dog") {
	std::cout << "Dog    copy contructor called!" << std::endl;
	*this = copy;
}

Dog	&Dog::operator=(const Dog& other) {
	if (this != &other) {
		this->_type = other._type;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog    destructor called!" << std::endl;
	delete _brain;
}

void Dog::makeSound() const {
	std::cout << Animal::_type << " say woof!" << std::endl;
}
