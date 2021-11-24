#include "RobotomyRequestForm.hpp"
# include <time.h>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : Form("RobotomyRequestForm", 72, 45), _target(copy._target) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this != &other) {
		_target = other._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	execAction();
}

void RobotomyRequestForm::execAction() const {
	srand(time(0));
	if (rand() % 2 == 0)
		std::cout << "TRTBRRRRZRWZRWRWRZ.... " << _target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Unfortunately the " << _target << " was no robotomized..." << std::endl;
}
