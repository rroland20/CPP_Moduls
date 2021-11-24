#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : Form("PresidentialPardonForm", 25, 5), _target(copy._target) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	if (this != &other) {
		_target = other._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	execAction();
}

void PresidentialPardonForm::execAction() const {
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
