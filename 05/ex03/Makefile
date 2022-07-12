CC = c++

NAME = Bureaucrat

CFLAGS = -Wall -Werror -Wextra -std=c++98

OBJDIR = ./obj
S = ./src/
OBJECTS = $(OBJDIR)/*.o
SRC =	$(S)main.cpp \
		$(S)Bureaucrat.cpp \
		$(S)Form.cpp \
		$(S)ShrubberyCreationForm.cpp \
		$(S)RobotomyRequestForm.cpp \
		$(S)PresidentialPardonForm.cpp \
		$(S)Intern.cpp

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(NAME)

$(OBJECTS): $(SRC)
	$(CC) -c $(CFLAGS) $(SRC)
	@rm -rf $(OBJDIR); mkdir $(OBJDIR)
	@mv *.o $(OBJDIR)

clean:
	rm -f $(OBJECTS)
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)