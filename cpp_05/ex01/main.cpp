#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat b("Bob", 50);
		Form form("Blank", 60, 30);
		std::cout << b << std::endl;
		std::cout << form << std::endl;
		b.signForm(form);
		b.signForm(form);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;;
	}
	std::cout << std::endl;
	try {
		Bureaucrat c("John", 15);
		Form f("Statement", 7, 2);
		c.gradeUp(10);
		std::cout << c << std::endl;
		c.gradeDown(5);
		std::cout << c << std::endl;
		std::cout << f << std::endl;
		c.signForm(f);
		c.gradeUp(3);
		std::cout << c << std::endl;
		c.signForm(f);
		std::cout << f << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}
