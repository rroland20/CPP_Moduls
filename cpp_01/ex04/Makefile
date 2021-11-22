NAME = replace

SOURCE = main.cpp

FLAGS = -Wall -Wextra -Werror

OBJ = $(SOURCE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(SOURCE) -o $(NAME) -g

%.o:%.cpp
	@clang++ -c $(FLAGS) $(SOURCE)

clean:
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all
