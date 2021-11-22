#include "HumanB.hpp"

void HumanB::attack() {
	std::cout << _nameB << " attacks with his " << _weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string &nameB) : _nameB(nameB), _weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}
