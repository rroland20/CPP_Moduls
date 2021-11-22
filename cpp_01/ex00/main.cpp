#include "Zombie.hpp"

int main() {
	Zombie z("Alena");
	Zombie *z1 = newZombie("Ivan");
	Zombie *z2 = newZombie("Polina");
	z1->annonce();
	z2->annonce();
	randomChump("Nikita");
	delete(z1);
	delete(z2);
}
