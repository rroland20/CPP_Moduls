#pragma once

class AMateria;
class Ice;
class Cure;

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria *_materia[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& copy);
	MateriaSource	&operator=(const MateriaSource& other);
	virtual ~MateriaSource();

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};