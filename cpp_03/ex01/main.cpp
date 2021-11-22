#include "ScavTrap.hpp"

int main () {
	ScavTrap scav("Bob");
	scav.attack("Nikita");
	scav.takeDamage(60);
	scav.beRepaired(30);
	scav.guardGate();
}