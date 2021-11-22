NAME = Human

SOURCE = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

HDR = Weapon.hpp HumanA.hpp HumanB.hpp

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
