#pragma once

class ClapTrap;

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();
public:
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap& copy);
	ScavTrap	&operator=(const ScavTrap& other);
	virtual ~ScavTrap();
	void attack(std::string const & target);
	void guardGate();
};
