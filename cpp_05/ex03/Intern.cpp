#include "Intern.hpp"

Intern::Intern() {
	_form_name[0] = "Shrubbery Creation";
	_form_name[1] = "Robotomy Request";
	_form_name[2] = "Presidential Pardon";

	_formPrint[0] = &Intern::ShrubberyCreationForm_intern;
	_formPrint[1] = &Intern::RobotomyRequestForm_intern;
	_formPrint[2] = &Intern::PresidentialPardonForm_intern;
}

Intern::Intern(const Intern& copy) { *this = copy; }

Intern	&Intern::operator=(const Intern& other) {
	if (this != &other) {
		for (int i = 0; i < 3; ++i)
			_form_name[i] = other._form_name[i];
		for (int i = 0; i < 3; ++i)
			_formPrint[i] = other._formPrint[i];
	}
	return (*this);
}

Intern::~Intern() {}

Form *Intern::makeForm(std::string &name, std::string &target) {
	int i = 0;
	while (i < 3 && _form_name[i] != name)
		i++;
	return _formPrint[i](target);
}

Form Intern::*ShrubberyCreationForm_intern(std::string target) { return (new ShrubberyCreationForm(target)); }

Form Intern::*RobotomyRequestForm_intern(std::string target) { return (new RobotomyRequestForm(target)); }

Form Intern::*PresidentialPardonForm_intern(std::string target) { return (new PresidentialPardonForm(target)); }

Intern::FormNotFound::FormNotFound() {}
const char* Intern::FormNotFound::what() const throw () { return "Form not found!"; }