#pragma once

class Animal;

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog& copy);
	Dog	&operator=(const Dog& other);
	~Dog();
	void makeSound() const;
};