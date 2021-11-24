#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}


Ice::Ice(const Ice& copy) : AMateria("ice") { *this = copy; }

Ice	&Ice::operator=(const Ice& other) { (void)other; return (*this); }

AMateria* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Ice::~Ice() {}