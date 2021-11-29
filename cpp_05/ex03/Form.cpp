#include "Form.hpp"

Form::Form(const std::string &name, int gradeSign, int gradeExec) \
	: _name(name), _sign(0), _gradeSign(gradeSign), _gradeExec(gradeExec) {
	checkGrade(_gradeSign);
	checkGrade(_gradeExec);
}

void Form::checkGrade(int grade) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& copy) : _name(copy._name), _sign(copy._sign), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec) {}

Form::~Form() {}

std::string Form::getName() const { return _name; }
bool Form::getSign() const { return _sign; }
int Form::getGradeSign() const { return _gradeSign; }
int Form::getGradeExec() const { return _gradeExec; }

void Form::beSigned(Bureaucrat &bur) {
	if (_sign)
		throw FormIsAlreadySignedException();
	else {
		if (bur.getGrade() <= this->getGradeSign()) {
			this->_sign = 1;
			std::cout << bur.getName() << " signed the form!" << std::endl;
		}
		else
			throw GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &out, Form &a) {
	if (a.getSign() == 0)
		out << "Form " << a.getName() << ", with grade - " << a.getGradeSign() << ", has not been signed yet.";
	else
		out << "Form " << a.getName() << ", with grade - " << a.getGradeSign() << ", signed!";
	return out;
}

Form::GradeTooHighException::GradeTooHighException() {}
const char* Form::GradeTooHighException::what() const throw () { return "Too high grade!"; }

Form::GradeTooLowException::GradeTooLowException() {}
const char* Form::GradeTooLowException::what() const throw () { return "Too low grade!"; }

Form::FormIsAlreadySignedException::FormIsAlreadySignedException() {}
const char* Form::FormIsAlreadySignedException::what() const throw () { return "The form is already signed!";}

Form::FormIsNotSignedException::FormIsNotSignedException() {}
const char* Form::FormIsNotSignedException::what() const throw () { return "The form is not signed!"; }

void Form::execute(Bureaucrat const & executor) const {
	if (this->getSign() == false)
		throw FormIsNotSignedException();
	if (executor.getGrade() >= this->getGradeExec())
		throw GradeTooLowException();
}
