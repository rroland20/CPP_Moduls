#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string _nameB;
	Weapon *_weapon;
public:
	HumanB(const std::string &nameB);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
};

#endif