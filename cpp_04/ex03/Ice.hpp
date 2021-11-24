#pragma once

class AMateria;

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria {
public:
	Ice();
	Ice(const Ice& copy);
	Ice	&operator=(const Ice& other);
	virtual ~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};