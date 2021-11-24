#pragma once

class Form;
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
private:
	std::string _form_name[3];
	Form (Intern::*_formPrint[4])(std::string target);
public:
	Intern();
	Intern(const Intern& copy);
	Intern	&operator=(const Intern& other);
	virtual ~Intern();

	Form *makeForm(std::string &name, std::string &target);
	Form *ShrubberyCreationForm_intern(std::string target);
	Form *RobotomyRequestForm_intern(std::string target);
	Form *PresidentialPardonForm_intern(std::string target);
	Form *FormException(std::string target);

	class FormNotFound : public std::exception
	{
	public:
		FormNotFound();
		virtual const char* what() const throw ();
		virtual ~FormNotFound() throw () {};
	};
};