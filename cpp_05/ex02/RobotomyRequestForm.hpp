#pragma once

class Form;
class Bureaucrat;

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm : public Form {
private:
	std::string _target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm& other);
	virtual ~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
	void execAction() const;
};
