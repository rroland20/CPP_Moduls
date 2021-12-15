#include "span.hpp"

int main()
{
	Span sp = Span(5);
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------" << std::endl;
	Span q = Span(1000);
	try
	{
		q.addNumber(0, 1000);
		std::cout << q.shortestSpan() << std::endl;
		std::cout << q.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------" << std::endl;
	Span vec = Span(10);
	std::vector<int> v;

	try
	{
		srand(time(0));
		for (int i = 0; i < 10; ++i)
			v.push_back(rand());
		vec.addNumber(v.begin(), v.end());
		std::cout << q.shortestSpan() << std::endl;
		std::cout << q.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}