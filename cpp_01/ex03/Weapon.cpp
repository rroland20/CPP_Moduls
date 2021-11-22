#include "Weapon.hpp"

Weapon::Weapon(){

}

void Weapon::setType(const std::string type) {
	_type = type;
}

const std::string &Weapon::getType(void) const { return _type; }

Weapon::Weapon(const std::string &type) : _type(type) {}
