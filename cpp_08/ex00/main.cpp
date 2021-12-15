#include "easyfind.hpp"
#include "vector"

int main() {
	{
		std::vector<int> v;

		v.push_back(11);
		v.push_back(3);
		v.push_back(7);
		try
		{
			std::cout << easyfind(v, 11) << std::endl;
		}
		catch(const char* e)
		{
			std::cerr << e << '\n';
		}
	}
	{
		std::vector<char> c;

		c.push_back(1);
		c.push_back(33);
		c.push_back(56);
		c.push_back(33);
		try
		{
			std::cout << easyfind(c, 33) << std::endl;
		}
		catch(const char* e)
		{
			std::cerr << e << '\n';
		}
	}
	{
		std::vector<double> d;

		d.push_back(15);
		d.push_back(23);
		d.push_back(70);
		try
		{
			std::cout << easyfind(d, 17) << std::endl;
		}
		catch(const char* e)
		{
			std::cerr << e << '\n';
		}
	}
}