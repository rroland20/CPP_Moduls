NAME = Animal

SOURCE = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

HDR = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

FLAGS = -Wall -Wextra -Werror --std=c++98

OBJ = $(SOURCE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(SOURCE) -o $(NAME)

%.o:%.cpp $(HDR)
	@clang++ -c $(FLAGS) $<
clean:
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all
