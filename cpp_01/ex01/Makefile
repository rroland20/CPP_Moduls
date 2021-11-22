NAME = Zombie

SOURCE = Zombie.cpp main.cpp ZombieHorde.cpp

HDR = Zombie.hpp

FLAGS = -Wall -Wextra -Werror

OBJ = $(SOURCE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(SOURCE) -o $(NAME) -g

%.o:%.cpp $(HDR)
	@clang++ -c $(FLAGS) $(SOURCE)

clean:
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all
