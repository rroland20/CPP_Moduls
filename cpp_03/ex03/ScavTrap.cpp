#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "ScavTrap " << _name << " constructor called!" << std::endl;
	_hp = 100;
	_ep = 50;
	_ad = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy._name) { *this = copy; }

ScavTrap	&ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << _name << " attack " << target << ", causing " \
	<< _ad << " points of damage!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " destructor called!" << std::endl;
}
