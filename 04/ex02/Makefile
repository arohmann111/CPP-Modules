CC = c++

NAME = AAnimal

CFLAGS = -std=c++98 -Wall -Werror -Wextra

OBJDIR = ./obj
OBJECTS = $(OBJDIR)/*.o
SRC =	AAnimal.cpp \
		Dog.cpp \
		Cat.cpp \
		Brain.cpp \
		main.cpp \

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