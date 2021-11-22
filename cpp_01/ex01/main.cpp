#include "Zombie.hpp"

int main() {
	Zombie *z;

	z = zombieHorde(5, "Bob");
	delete[] z;
}