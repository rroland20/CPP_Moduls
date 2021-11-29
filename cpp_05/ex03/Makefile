NAME = Bureaucrat

SOURCE = Bureaucrat.cpp main.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJ_DIR = .obj

HDR = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp

FLAGS = -Wall -Wextra -Werror --std=c++98

OBJ = $(addprefix $(OBJ_DIR)/,$(SOURCE:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(SOURCE) -o $(NAME)

$(OBJ_DIR)/%.o:%.cpp $(HDR)
	@mkdir -p $(OBJ_DIR)
	@clang++ -c $(FLAGS) $< -o $@
clean:
	@rm -rf $(OBJ_DIR)
fclean: clean
	@rm -rf $(NAME) *_shrubbery
re: fclean all
