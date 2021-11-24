#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain  default contructor called!" << std::endl;
	for (int i = 0; i < 100; ++i) {
		_ideas[i] = "";
	}
}

Brain::Brain(const Brain& copy) {
	std::cout << "Brain  copy contructor called!" << std::endl;
	*this = copy;
}

Brain	&Brain::operator=(const Brain& other) {
	if (this != &other) {
		for (int i = 0; i < 100; ++i)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain  destructor called!" << std::endl;
}
