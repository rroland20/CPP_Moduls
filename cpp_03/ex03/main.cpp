#include "DiamondTrap.hpp"

int main () {
	DiamondTrap d("Bob");
	std::cout << std::endl;
	d.attack("Nikita");
	d.takeDamage(40);
	d.beRepaired(7);
	std::cout << std::endl;
	d.guardGate();
	d.highFivesGuys();
	std::cout << std::endl;
	d.whoAmI();
	d.printParam();
	std::cout << std::endl;
}