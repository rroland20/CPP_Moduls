#pragma once

class AMateria;
class ICharacter;
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	AMateria *_materia[4];
	std::string _name;
public:
	Character();
	Character(const std::string & name);
	Character(const Character& copy);
	Character	&operator=(const Character& other);
	virtual ~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};