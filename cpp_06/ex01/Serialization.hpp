#pragma once

#include <iostream>
#include <string>

struct Data {
	int num;
	std::string str;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
