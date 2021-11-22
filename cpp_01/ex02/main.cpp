#include <iostream>

int main(void) {
	std::string brain = "HI THIS IS BRAIN";
	std::string *ptr = &brain;
	std::string &ref = brain;

	std::cout << "адрес в памяти строки - " << &brain << std::endl << std::endl;

	std::cout << "адрес строки с помощью указателя - " << ptr << std::endl;
	std::cout << "адрес строки с помощью ссылки - " << &ref << std::endl << std::endl;

	std::cout << "строка с помощью указателя - " << *ptr << std::endl;
	std::cout << "строка с помощью ссылки - " << ref << std::endl;
}