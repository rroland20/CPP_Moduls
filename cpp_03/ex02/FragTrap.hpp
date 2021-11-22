#pragma once

class ClapTrap;

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap();
public:
	FragTrap(const std::string &name);
	FragTrap(const FragTrap& copy);
	FragTrap	&operator=(const FragTrap& other);
	virtual ~FragTrap();
	void highFivesGuys(void);
	void attack(std::string const & target);
};