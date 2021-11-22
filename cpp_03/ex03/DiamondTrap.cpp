#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
	std::cout << "DiamondTrap " << _name << " constructor called!" << std::endl;
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_ad = FragTrap::_ad;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy._name + "_clap_name"), ScavTrap(copy._name), FragTrap(copy._name) {
	*this = copy;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		this->_name = other._name;
	}
	return (*this);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " << _name  << "; ClapTrap name: " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string & target) {
	ScavTrap::attack(target);
}

void DiamondTrap::printParam() {
	std::cout << "Hitpoints(FragTrap): " << _hp << ", Energy points(ScavTrap): " << _ep << ", Attack damage(FragTrap): " << _ad << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " destructor called!" << std::endl;
}
