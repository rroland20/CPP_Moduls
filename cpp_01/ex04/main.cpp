#include <iostream>
#include <fstream>
#include <sstream>

int puterr(std::string str) {
	std::cout << str << std::endl;
	return 1;
}

std::string	fill_str(std::string str, std::string first, std::string second) {
	std::stringstream res;
	size_t len_f(first.length());
	size_t i = 0, j;

	while (i < str.length()) {
		j = 0;
		while (str[i + j] == first[j] && j < len_f)
			j++;
		if (j == len_f) {
			res << second;
			i += j - 1;
		}
		else
			res << str[i];
		i++;
	}
	return res.str();
}

int	replace_str(std::string file, std::string first, std::string second) {
	std::ifstream fd;
	std::ofstream file_out;
	std::string tmp;

	fd.open(file);
	file_out.open(file + ".replace", std::ios::trunc);
	if (!fd.is_open() || !file_out.is_open())
		return 1;
	while (!fd.eof()) {
		getline(fd, tmp);
		file_out << fill_str(tmp, first, second) << std::endl;
	}
	fd.close();
	file_out.close();
	return 0;
}

int main(int ac, char **av) {
	std::string first(av[2]);
	std::string second(av[3]);

	if (ac == 4) {
		if (first.empty() || second.empty())
			return (puterr("error: string is empty"));
		if (replace_str(av[1], first, second))
			return (puterr("error open file"));
	}
	else
		return (puterr("error: bad argument"));
	return 0;
}
