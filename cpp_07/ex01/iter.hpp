#pragma once

#include <iostream>

template <typename T>
void func(const T& print) {
	std::cout << print << std::endl;
}

template <typename T>
void iter(T* addr, const size_t& len, void (*func)(const T&)) {
	for (size_t i = 0; i < len; ++i)
		func(addr[i]);
}
