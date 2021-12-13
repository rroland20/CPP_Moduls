#pragma once

#include <iostream>

template <typename T>
class Array {
private:
	int _n;
	T *_arr;
public:
	Array() : _n(0), _arr(0) {}

	Array(const unsigned int &n) : _n(n), _arr(new T[n]) {
		if (_n == 0)
			throw EmptyArrayException();
	}

	Array(const Array& copy) : _n(), _arr() { *this = copy; }

	Array	&operator=(const Array& other) {
		if (this != &other) {
			_n = other._n;
			delete [] _arr;
			_arr = new T[_n];
			for (int i = 0; i < _n; ++i)
				_arr[i] = other._arr[i];
		}
		return (*this);
	}

	T	&operator[](const int &idx) const {
		if (_n <= idx || idx < 0)
			throw InvalidIndexException();
		if (_n == 0)
			throw EmptyArrayException();
		return _arr[idx];
	}

	virtual ~Array() { delete [] _arr; }

	class InvalidIndexException : public std::exception {
	public:
		InvalidIndexException() {}
		virtual ~InvalidIndexException() throw () {}
		virtual const char* what() const throw() { return "Invalid index!"; }
	};

	class EmptyArrayException : public std::exception {
	public:
		EmptyArrayException() {}
		virtual ~EmptyArrayException() throw () {}
		virtual const char* what() const throw() { return "Empty array!"; }
	};
};
