#include "span.hpp"

Span::Span(const int n_max) : _n(0), _n_max(n_max) {}


Span::Span(const Span& copy) { *this = copy; }

Span	&Span::operator=(const Span& other) {
	if (this != &other) {
		_n = other._n;
		_n_max = other._n_max;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int num) {
	if (_n >= _n_max)
		throw NumberLimitException();
	_cont.push_back(num);
	std::sort(_cont.begin(), _cont.end());
	++_n;
}

void Span::addNumber(int min, int max) {
	if (max - min > _n_max)
		throw NumberLimitException();
	srand(time(0));
	for (; min < max; ++min)
		_cont.push_back(rand());
	std::sort(_cont.begin(), _cont.end());
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	for (; begin < end - 1; ++begin)
		_cont.push_back(*begin);
	std::sort(_cont.begin(), _cont.end());
}


void Span::checkArray() {
	if (_cont.begin() == _cont.end())
		throw EmptyArrayException();
	else if (_cont.begin() + 1 == _cont.end())
		throw OneElementException();
}

unsigned int Span::shortestSpan() {
	checkArray();
	int sh = INT_MAX;
	for (std::vector<int>::iterator it = _cont.begin() + 1; it < _cont.end(); ++it) {
		if (*it - *(it - 1) < sh) {
			sh = *it - *(it - 1);
		}
	}
	return sh;
}

unsigned int Span::longestSpan() {
	checkArray();
	int lon = *(_cont.end() - 1) - *(_cont.begin());
	return lon;
}

