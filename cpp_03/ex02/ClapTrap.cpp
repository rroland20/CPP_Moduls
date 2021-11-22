#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hp(10), _ep(10), _ad(0) {
	std::cout << "ClapTrap " << _name << " constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name, int hp, int ep, int ad) : _name(name), _hp(hp), _ep(ep), _ad(ad) {}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other) {
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_ad = other._ad;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " destructor called!" << std::endl;
}

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing " \
	<< _ad << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " take " << amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " be repaired by " << amount << " points!" << std::endl;
}
