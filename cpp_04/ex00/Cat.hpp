#pragma once

class Animal;

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& copy);
	Cat	&operator=(const Cat& other);
	~Cat();
	void makeSound() const;
};