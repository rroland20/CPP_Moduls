NAME = DiamondTrap

SOURCE = main.cpp ClapTrap.cpp FragTrap.cpp DiamondTrap.cpp ScavTrap.cpp

HDR = ClapTrap.hpp FragTrap.hpp DiamondTrap.hpp ScavTrap.hpp

FLAGS = -Wall -Wextra -Werror --std=c++98 -Wshadow -Wno-shadow

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