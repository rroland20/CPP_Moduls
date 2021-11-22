#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _raw(0) {}

Fixed::Fixed(const Fixed &a){
	*this = a;
}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &a) {
	if (this != &a)
		this->_raw = a._raw;
	return (*this);
}

const int Fixed::_exp = toExp();

int Fixed::toExp() {
	int e = 1, i = -1;

	while (++i < _bits) {
		e *= 2;
	}
	return e;
}

Fixed::Fixed(const int num) {
	_raw = num << _bits;
}

Fixed::Fixed(const float fnum){
	_raw = (int)(roundf(fnum * _exp));
}

float Fixed::toFloat(void) const {
	return (float)_raw / _exp;
}

int Fixed::toInt(void) const {
	int a = _raw >> _bits;
	return a;
}

std::ostream& operator<<(std::ostream& out, const Fixed &a) {
	out << a.toFloat();
	return out;
}

/* NEW */

/* comparison operators */

bool Fixed::operator>(const Fixed &a) const { return this->toFloat() > a.toFloat(); }
bool Fixed::operator<(const Fixed &a) const { return this->toFloat() < a.toFloat(); }
bool Fixed::operator>=(const Fixed &a) const { return this->toFloat() >= a.toFloat(); }
bool Fixed::operator<=(const Fixed &a) const { return this->toFloat() <= a.toFloat(); }
bool Fixed::operator==(const Fixed &a) const { return this->toFloat() == a.toFloat(); }
bool Fixed::operator!=(const Fixed &a) const { return this->toFloat() != a.toFloat(); }

/* arithmetic operators */

Fixed operator+(const Fixed &a, const Fixed &b) {
	Fixed add(a.toFloat() + b.toFloat());
	return add;
}

Fixed operator-(const Fixed &a, const Fixed &b) {
	Fixed sub(a.toFloat() - b.toFloat());
	return sub;
}

Fixed operator*(const Fixed &a, const Fixed &b) {
	Fixed m(a.toFloat() * b.toFloat());
	return m;
}

Fixed operator/(const Fixed &a, const Fixed &b) {
	Fixed div(a.toFloat() / b.toFloat());
	return div;
}

/* pre-* post-* operators */

Fixed &Fixed::operator++() {
	++_raw;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++_raw;
	return tmp;
}

Fixed &Fixed::operator--() {
	--_raw;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	--_raw;
	return tmp;
}

/* min & max function */

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) { return a < b ? a : b; }
Fixed &Fixed::min(Fixed &a, Fixed &b) { return a < b ? a : b; }
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) { return a > b ? a : b; }
Fixed &Fixed::max(Fixed &a, Fixed &b) { return a > b ? a : b; }
