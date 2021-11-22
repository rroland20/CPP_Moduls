#pragma once

#include <iostream>

class ClapTrap
{
private:
	std::string _name;
	int _hp;
	int _ep;
	int _ad;
	ClapTrap();
public:
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap& copy);
	ClapTrap	&operator=(const ClapTrap& other);
	virtual ~ClapTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};