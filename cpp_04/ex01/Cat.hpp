#pragma once

class Animal;
class Brain;

#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain *_brain;
public:
	Cat();
	Cat(const Cat& copy);
	Cat	&operator=(const Cat& other);
	virtual ~Cat();
	void makeSound() const;
};