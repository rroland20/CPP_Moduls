#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	try
	{
		Bureaucrat bob("Bob", 1);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Shrubbery Creation", "Bender");
		bob.signForm(*rrf);
		bob.executeForm(*rrf);
		delete rrf;
		rrf = someRandomIntern.makeForm("Robotomy Request", "Mike");
		bob.signForm(*rrf);
		bob.executeForm(*rrf);
		delete rrf;
		rrf = someRandomIntern.makeForm("Presidential Pardon", "Mike");
		bob.signForm(*rrf);
		bob.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const char* e)
	{
		std::cerr << e << std::endl;
	}
	try
	{
		Form* rrf;
		Intern someRandomIntern;
		rrf = someRandomIntern.makeForm("ygfjytfyg", "Bender");
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
