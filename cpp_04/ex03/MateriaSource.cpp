#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_materia[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
	for (int i = 0; i < 4; i++)
		_materia[i] = copy._materia[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++)
			_materia[i] = other._materia[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] == 0)
		{
			_materia[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	if (type == "ice")
		return new Ice();
	if (type == "cure")
		return new Cure();
	return 0;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete _materia[i];
}