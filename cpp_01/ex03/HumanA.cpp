#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << _nameA << " attacks with his " << _weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &nameA, Weapon &weapon) : _nameA(nameA), _weapon(weapon) {}

HumanA::~HumanA() {}
