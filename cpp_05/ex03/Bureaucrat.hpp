#pragma once

class Form;

#include "Form.hpp"
#include <iostream>

class Bureaucrat {
private:
	Bureaucrat();
	const std::string _name;
	int _grade;
	void checkGrade();
public:
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat	&operator=(const Bureaucrat& other);
	virtual ~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
	void gradeUp(int u_grade);
	void gradeDown(int u_grade);
	void signForm(Form &a);

	void executeForm(Form const & form);

	class GradeTooHighException : public std::exception {
	public:
		GradeTooHighException();
		virtual const char* what() const throw ();
		virtual ~GradeTooHighException() throw () {}
	};
	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException();
		virtual const char* what() const throw ();
		virtual ~GradeTooLowException() throw () {}
	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &);
