#pragma once

#include <iostream>

template <typename T>
class Array {
private:
	int _n;
	T *_arr;
public:
	Array() : _n(0), _arr(0) {}

	Array(const unsigned int &n) : _n(n), _arr(new T[n]) {}

	Array(const Array& copy) : _n(), _arr() { *this = copy; }

	Array	&operator=(Array& other) {
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
		if (_n < idx || idx < 0)
			throw "Bad iterator!";
		return _arr[idx];
	}

	virtual ~Array() { delete [] _arr; }
};