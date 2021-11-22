NAME = megaphone

SOURCE = megaphone.cpp

FLAGS = -Wall -Wextra -Werror

OBJ = $(SOURCE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@g++ $(SOURCE) -o $(NAME) -g

%.o:%.cpp
	@g++ -c $(FLAGS) $(SOURCE)

clean:
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all
