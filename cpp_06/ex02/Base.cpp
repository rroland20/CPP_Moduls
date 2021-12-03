#include "Base.hpp"

Base::~Base() {}

A::~A() {}

B::~B() {}

C::~C() {}

Base * generate(void) {
	srand(time(0));
	if (rand() % 3 == 0)
		return new A;
	else if (rand() % 3 == 1)
		return new B;
	else
		return new C;
	return 0;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base& p) {
	Base base;

	try {
		base = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::exception &ex) { std::cout << ex.what() << std::endl; }

	try {
		base = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::exception &ex) { std::cout << ex.what() << std::endl; }

	 try {
		base = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(std::exception &ex) { std::cout << ex.what() << std::endl; }
}
