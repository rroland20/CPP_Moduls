#pragma once

class Animal;
class Brain;

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal {
private:
	Brain *_brain;
public:
	Dog();
	Dog(const Dog& copy);
	Dog	&operator=(const Dog& other);
	virtual ~Dog();
	void makeSound() const;
};