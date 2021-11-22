NAME = phonebook

SOURCE = main.cpp phonebook.cpp

HDR = phonebook.hpp contact.hpp

FLAGS = -Wall -Wextra -Werror

OBJ = $(SOURCE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@g++ $(SOURCE) -o $(NAME) -g

%.o:%.cpp $(HDR)
	@g++ -c $(FLAGS) $(SOURCE)

clean:
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all