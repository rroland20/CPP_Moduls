#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade) {
	checkGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name) { *this = copy; }

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other) {
		_grade = other._grade;
	}
	return (*this);
}

std::string Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade() const { return _grade; }

Bureaucrat::~Bureaucrat() {}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &a) {
	out << a.getName() << ", bureaucrat grade " << a.getGrade();
	return out;
}

void Bureaucrat::checkGrade() {
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::gradeUp(int u_grade) {
	_grade -= u_grade;
	checkGrade();
}

void Bureaucrat::gradeDown(int u_grade) {
	_grade += u_grade;
	checkGrade();
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}
const char* Bureaucrat::GradeTooHighException::what() const throw () { return "Too high grade!"; }

Bureaucrat::GradeTooLowException::GradeTooLowException() {}
const char* Bureaucrat::GradeTooLowException::what() const throw () { return "Too low grade!"; }