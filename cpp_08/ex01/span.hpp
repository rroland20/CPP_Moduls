#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

class Span {
private:
	unsigned int _n;
	unsigned int _n_max;
	std::vector<int> _cont;
	Span();
public:
	Span(const int n_max);
	Span(const Span& copy);
	Span	&operator=(const Span& other);
	virtual ~Span();

	void addNumber(int num);
	void addNumber(int min, int max);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	void checkArray();

	class NumberLimitException : public std::exception {
	public:
		NumberLimitException() {}
		virtual ~NumberLimitException() throw () {}
		virtual const char* what() const throw() { return "Number limit exceeded!"; }
	};

	class EmptyArrayException : public std::exception {
	public:
		EmptyArrayException() {}
		virtual ~EmptyArrayException() throw () {}
		virtual const char* what() const throw() { return "Empty array!"; }
	};

	class OneElementException : public std::exception {
	public:
		OneElementException() {}
		virtual ~OneElementException() throw () {}
		virtual const char* what() const throw() { return "One element in an array!"; }
	};
};