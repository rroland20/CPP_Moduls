#include "mutantstack.hpp"

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "---------" << std::endl;
	{
		MutantStack<char> mchar;
		mchar.push('q');
		mchar.push('w');
		mchar.push('e');
		mchar.pop();
		mchar.push('r');
		mchar.push('t');
		mchar.push('y');
		MutantStack<char>::iterator it = mchar.begin();
		MutantStack<char>::iterator ite = mchar.end();
		for (; it != ite; ++it)
			std::cout << *it;
		std::cout << std::endl;
		std::cout << mchar.empty() << std::endl;
	}
	return 0;
}