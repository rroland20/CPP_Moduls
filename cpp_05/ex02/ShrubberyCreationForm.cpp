#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : Form("ShrubberyCreationForm", 145, 137), _target(copy._target) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	if (this != &other) {
		_target = other._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	execAction();
}

void ShrubberyCreationForm::execAction() const {
	std::ofstream file_out;

	file_out.open((_target + "_shrubbery").c_str(), std::ios::app);
	if (!file_out.is_open()) {
		std::cout << "Error open file: " << _target << "_shrubbery" << std::endl;
		return ;
	}
	file_out << "◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯\n" <<
				"◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯\n" <<
				"┈◯◯╰┻◯◯╋◯┻◯◯╯◯╯┈\n" <<
				"┈┈╰━┓╰━┋┗━╯┣━╯┈┈\n" <<
				"╱╲┈┈╰━┓┆┏┳━╯┈┈╱╲\n" <<
				"┈┈╱╲┈┈┃┋┋┃┈┈┈╱┈┈\n" <<
				"━━━━━━┻┻┻┻━━━━━━\n";
	file_out.close();
}
