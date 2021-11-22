#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Zombie!!!" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << _name << " - Zombie!!!" << std::endl;
}

Zombie::~Zombie() {
	std::cout << _name << " - DEAD!" << std::endl;
}

void	Zombie::annonce() {
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	_name = name;
	annonce();
}
