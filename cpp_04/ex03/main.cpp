#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("Alena");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	tmp->use(*me);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	tmp->use(*me);
	me->equip(tmp);
	ICharacter* bob = new Character("Bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}