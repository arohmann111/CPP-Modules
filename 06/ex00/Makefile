NAME = convert

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

OBJDIR = ./obj
SRC =	main.cpp \
		Convert.cpp \

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(OBJS): $(SRC)
	$(CC) -c $(CFLAGS) $(SRC)
	rm -rf $(OBJDIR); mkdir $(OBJDIR)
	mv *.o $(OBJDIR)

clean:
	rm -rf $(OBJS)
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
