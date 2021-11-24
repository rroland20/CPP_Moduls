#pragma once

class ICharacter;

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
private:
	AMateria();
protected:
	std::string _type;
public:
	AMateria(std::string const & type);
	AMateria(const AMateria& copy);
	AMateria	&operator=(const AMateria& other);
	virtual ~AMateria();

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};