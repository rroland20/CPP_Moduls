#pragma once

class Form;
class Bureaucrat;

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
private:
	std::string _target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm& other);
	virtual ~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;
	void execAction() const;
};