#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a){
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &a) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &a)
		this->_raw = a._raw;
	return (*this);
}

/* NEW */

const int Fixed::_exp = toExp();

int Fixed::toExp() {
	int e = 1, i = -1;

	while (++i < _bits) {
		e *= 2;
	}
	return e;
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	_raw = num << _bits;
}

Fixed::Fixed(const float fnum){
	std::cout << "Float constructor called" << std::endl;
	_raw = (int)(roundf(fnum * _exp));
}

float Fixed::toFloat(void) const {
	float f = (float)_raw / _exp;
	return f;
}

int Fixed::toInt(void) const {
	int a = _raw >> _bits;
	return a;
}

std::ostream& operator<<(std::ostream& out, const Fixed &a) {
	out << a.toFloat();
	return out;
}
