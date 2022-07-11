CC = c++

NAME = Bureaucrat

CFLAGS = -Wall -Werror -Wextra -std=c++98

OBJDIR = ./obj
OBJECTS = $(OBJDIR)/*.o
SRC =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp \

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