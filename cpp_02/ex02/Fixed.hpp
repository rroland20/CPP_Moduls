#include <iostream>
#include <cmath>

class Fixed {
private:
	int _raw;
	static const int _bits;
	static const int _exp;
	static int toExp();
public:
	Fixed();
	Fixed(const Fixed &a);
	Fixed(const int num);
	Fixed(const float fnum);
	~Fixed();
	Fixed &operator=(const Fixed &a);
	float toFloat(void) const;
	int toInt(void) const;

	bool operator>(const Fixed &a) const;
	bool operator<(const Fixed &a) const;
	bool operator>=(const Fixed &a) const;
	bool operator<=(const Fixed &a) const;
	bool operator==(const Fixed &a) const;
	bool operator!=(const Fixed &a) const;


	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);

};

std::ostream& operator<<(std::ostream& out, const Fixed &a);
Fixed operator+(const Fixed &a, const Fixed &b);
Fixed operator-(const Fixed &a, const Fixed &b);
Fixed operator*(const Fixed &a, const Fixed &b);
Fixed operator/(const Fixed &a, const Fixed &b);
