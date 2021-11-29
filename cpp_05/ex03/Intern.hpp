#pragma once

class Form;
class Intern;
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef Form *(Intern::*Method)(std::string target);

typedef void my_void;
typedef unsigned int uint;

class Intern {
private:
	std::string _form_name[3];
	Method _formPrint[4];
	my_void q()
	{
		(this->*_formPrint[0])(_form_name[0]);
	}
	
public:
	Intern();
	Intern(const Intern& copy);
	Intern	&operator=(const Intern& other);
	virtual ~Intern();

	Form *makeForm(const std::string &name, const std::string &target);
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
