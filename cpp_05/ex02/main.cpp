#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Form *form;
	Form *house;
	Form *church;
	try {
		Bureaucrat b("Bob", 50);
		form = new PresidentialPardonForm("lala");
		house = new ShrubberyCreationForm("House");
		church = new ShrubberyCreationForm("Church");
		b.gradeUp(49);
		b.signForm(*form);
		b.signForm(*house);
		b.signForm(*church);
		std::cout << b << std::endl;
		std::cout << *form << std::endl;
		b.executeForm(*form);
		b.executeForm(*house);
		b.executeForm(*church);
		delete form;
		delete house;
		delete church;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;;
	}
	std::cout << std::endl;
	Form *robot;
	try {
		Bureaucrat c("John", 15);
		robot = new RobotomyRequestForm("Robot");
		c.gradeUp(10);
		c.signForm(*robot);
		c.executeForm(*robot);
		delete robot;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}
