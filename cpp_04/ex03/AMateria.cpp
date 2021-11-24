#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

std::string const & AMateria::getType() const { return _type; }

void AMateria::use(ICharacter& target) {
	std::cout << _type << "blablabla" << target.getName() << std::endl;
}

AMateria::AMateria(const AMateria& copy) : _type(copy._type) { *this = copy; }

AMateria	&AMateria::operator=(const AMateria& other) {
	if (this != &other) {
		_type = other._type;
	}
	return (*this);
}

AMateria::~AMateria() {}
