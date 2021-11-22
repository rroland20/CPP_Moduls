#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	std::string _nameA;
	Weapon &_weapon;
public:
	HumanA(const std::string &nameA, Weapon &weapon);
	~HumanA();
	void attack();
};

#endif
