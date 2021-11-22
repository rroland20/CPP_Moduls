#include <iostream>

class Fixed {
private:
	int _raw;
	static const int _bits;
public:
	Fixed();
	Fixed(const Fixed &a);
	~Fixed();
	Fixed &operator=(const Fixed &a);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};