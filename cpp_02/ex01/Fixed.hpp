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
	~Fixed();
	Fixed &operator=(const Fixed &a);

	Fixed(const int num);
	Fixed(const float fnum);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed &a);
