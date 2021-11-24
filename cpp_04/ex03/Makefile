NAME = Materia

SOURCE =	main.cpp \
			AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			MateriaSource.cpp

HDR = Amateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSourse.hpp MateriaSourse.hpp

FLAGS = -Wall -Wextra -Werror --std=c++98

OBJ = $(SOURCE:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	@clang++ -c $(FLAGS) $<

$(NAME): $(OBJ)
	@clang++ $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
