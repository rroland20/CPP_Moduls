#include "Character.hpp"

Character::Character() : _name("") {
	for (int i = 0; i < 4; i++)
		_materia[i] = 0;
}

Character::Character(const std::string & name) : _name(name) {
	for (int i = 0; i < 4; i++)
		_materia[i] = 0;
}


Character::Character(const Character& copy) : _name(copy._name) {
	for (int i = 0; i < 4; i++)
		_materia[i] = copy._materia[i]->clone();
}

Character	&Character::operator=(const Character& other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++)
			_materia[i] = other._materia[i]->clone();
		_name = other._name;
	}
	return (*this);
}

std::string const & Character::getName() const { return _name; }

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; ++i) {
		if (_materia[i] == 0) {
			_materia[i] = m->clone();
			break ;
		}
	}
}

void Character::unequip(int idx) {
	delete _materia[idx];
	_materia[idx] = 0;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3 || _materia[idx] == 0)
		return ;
	_materia[idx]->use(target);
}

Character::~Character() {
	for (int i = 0; i < 4; ++i)
		delete _materia[i];
}