#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "FragTrap " << _name << " constructor called!" << std::endl;
	_hp = 100;
	_ep = 100;
	_ad = 30;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy._name) { *this = copy; }

FragTrap	&FragTrap::operator=(const FragTrap& other) {
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << _name << ": Give me high five!" << std::endl;
}

void FragTrap::attack(std::string const & target) {
	std::cout << "FragTrap " << _name << " attack " << target << ", causing " \
	<< _ad << " points of damage!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " destructor called!" << std::endl;
}
