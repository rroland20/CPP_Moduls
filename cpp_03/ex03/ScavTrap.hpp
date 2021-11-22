#pragma once

class ClapTrap;

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
	int _hp;
	int _ep;
	int _ad;
private:
	ScavTrap();
public:
	ScavTrap(const ScavTrap& copy);
	ScavTrap(const std::string &name);
	void attack(std::string const & target);
	ScavTrap	&operator=(const ScavTrap& other);
	virtual ~ScavTrap();
	void guardGate();
};
