#pragma once

#include <iostream>

class Animal
{
private:
	Animal();
protected:
	std::string _type;
public:
	Animal(std::string type);
	Animal(const Animal& copy);
	Animal	&operator=(const Animal& other);
	virtual ~Animal();
	virtual void makeSound() const = 0;
	std::string getType() const;
};
