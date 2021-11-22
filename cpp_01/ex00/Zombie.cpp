#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << _name << " - Zombie!!!" << std::endl;
}

Zombie::~Zombie() {
	std::cout << _name << " - DEAD!" << std::endl;
}

void	Zombie::annonce() {
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
