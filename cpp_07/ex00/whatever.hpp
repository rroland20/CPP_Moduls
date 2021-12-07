#pragma once

#include <iostream>

template <typename T>
void swap(T& s1, T& s2) {
	T rep;
	rep = s1;
	s1 = s2;
	s2 = rep;
}

template <typename T>
T min(const T& lhs, const T& rhs) {
	return lhs < rhs ? lhs : rhs;
}

template <typename T>
T max(const T& lhs, const T& rhs) {
	return lhs > rhs ? lhs : rhs;
}
