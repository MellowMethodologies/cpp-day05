SRCS = main.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp AForm.cpp

OBJS = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror #-std=c++98

C = c++

NAME = Bureaucrat

all: $(NAME)

$(NAME): $(OBJS)
	$(C) $(FLAGS) $^ -o $@

%.o:%.cpp *.hpp
	$(C) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean 