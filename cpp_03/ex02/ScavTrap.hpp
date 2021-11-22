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
	void attack(std::string const & target);
	ScavTrap	&operator=(const ScavTrap& other);
	virtual ~ScavTrap();
	void guardGate();
};
