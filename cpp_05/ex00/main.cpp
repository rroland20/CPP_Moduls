#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat b("Bob", 500);
		std::cout << b << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;;
	}

	try {
		Bureaucrat c("John", 15);
		c.gradeUp(10);
		std::cout << c << std::endl;
		c.gradeDown(5);
		std::cout << c << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat d("Sam", -5);
		d.gradeUp(10);
		std::cout << d << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}