#pragma once

#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack() : std::stack<T>() {}

	MutantStack(const MutantStack<T>& copy) { *this = copy; }

	MutantStack<T>	&operator=(const MutantStack<T>& other) {
		if (this != &other) {
			std::stack<T>::operator=(other);
		}
		return (*this);
	}

	~MutantStack() {}

	iterator begin() {
		return std::stack<T>::c.begin();
	}

	iterator end() {
		return std::stack<T>::c.end();
	}
};
