NAME = Bureaucrat

SOURCE = Bureaucrat.cpp main.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

HDR = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp

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