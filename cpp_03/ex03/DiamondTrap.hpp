#pragma once

class ScavTrap;
class FragTrap;

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
private:
	int _hp;
	int _ep;
	int _ad;
	DiamondTrap();
	std::string _name;
public:
	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap& copy);
	DiamondTrap	&operator=(const DiamondTrap& other);
	virtual ~DiamondTrap();
	void whoAmI();
	void printParam();
	void attack(const std::string & target);
};