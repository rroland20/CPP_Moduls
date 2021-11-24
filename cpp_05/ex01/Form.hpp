#pragma once

class Bureaucrat;
#include "Bureaucrat.hpp"
#include <iostream>

class Form {
private:
	const std::string _name;
	bool _sign;
	const int _gradeSign;
	const int _gradeExec;
	Form();
	Form	&operator=(const Form& other);
	void checkGrade(int grade);
public:
	Form(const std::string &name, int gradeSign, int gradeExec);
	Form(const Form& copy);
	virtual ~Form();

	std::string getName() const;
	bool getSign() const;
	int getGradeSign() const;
	int getGradeExec() const;
	void beSigned(Bureaucrat &bur);

	class GradeTooHighException : public std::exception {
	public:
		GradeTooHighException();
		virtual const char* what() const throw ();
		virtual ~GradeTooHighException() throw () {} ;
	};
	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException();
		virtual const char* what() const throw ();
		virtual ~GradeTooLowException() throw () {};
	};
	class FormIsAlreadySignedException : public std::exception {
	public:
		FormIsAlreadySignedException();
		virtual const char* what() const throw ();
		virtual ~FormIsAlreadySignedException() throw () {} ;
	};
};

std::ostream &operator<<(std::ostream &out, Form &);