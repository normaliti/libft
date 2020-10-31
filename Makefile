NAME = libft.a
SRC = ft_strjoin.c 
OBJ = $(SRC:.c=.o)
FLAG = -Wall -Wextra -Werror
all: $(NAME)
$(NAME):$(OBJ)
	gcc $(FLAG) -c $(SRC) libft.h
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all	
