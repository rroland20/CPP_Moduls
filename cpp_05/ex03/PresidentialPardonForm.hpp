#pragma once

class Form;
class Bureaucrat;

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form{
private:
	std::string _target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	PresidentialPardonForm	&operator=(const PresidentialPardonForm& other);
	virtual ~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;
	void execAction() const;
};
