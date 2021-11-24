#pragma once

class AMateria;

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(const Cure& copy);
	Cure	&operator=(const Cure& other);
	virtual ~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);

};