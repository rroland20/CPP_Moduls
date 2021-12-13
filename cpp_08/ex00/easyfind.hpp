#include <iostream>
#include <iterator>
#include <algorithm>

template <typename T>
int easyfind(T cont, int find) {
	typename T::iterator it;

	it = std::find(cont.begin(), cont.end(), find);
	if (it != cont.end())
		return it - cont.begin();
	throw "Find not found!";
}
