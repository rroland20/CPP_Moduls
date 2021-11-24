#pragma once

class WrongAnimal;

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat& copy);
	WrongCat	&operator=(const WrongCat& other);
	virtual ~WrongCat();
	void makeSound() const;
};