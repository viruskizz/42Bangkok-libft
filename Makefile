CFLAGS = -Wall -Werror -Wextra
LIB = libft.a
TARGET = main.c
NAME = runner.out

all: $(NAME)

$(NAME): $(TARGET)
	@gcc -c $(CFLAGS) ft_*.c
	@ar rc $(LIB) ft_*.o
	@rm ft_*.o
	@gcc -c $(CFLAGS) $(TARGET)
	@gcc main.o -I libft.h -L . -lft -o $(NAME)
	@./$(NAME)

.PHONY: all clean fclean re

clean:
	@rm -f *.o
	@echo ".o has cleaned"

fclean: clean
	@-rm -f $(LIB)
	@-rm -f main.o
	@-rm -f *.out
	@echo ".out has cleaned"

re: fclean all