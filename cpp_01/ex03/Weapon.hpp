#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon {
private:
	std::string _type;
public:
	Weapon();
	Weapon(const std::string &type);
	void setType(const std::string new_weapon);
	const std::string &getType(void) const;
};

#endif
