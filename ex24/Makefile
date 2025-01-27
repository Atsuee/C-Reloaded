SRCS_DIR = srcs

LIBC = $(SRCS_DIR)/ft_putchar.c $(SRCS_DIR)/ft_putstr.c $(SRCS_DIR)/ft_strcmp.c $(SRCS_DIR)/ft_swap.c $(SRCS_DIR)/ft_strlen.c

OBJ = $(LIBC:.c=.o)

NAME = libft.a

CC = cc

CFLAGS =  -Wall -Werror -Wextra -I /

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rsc $(NAME) $(OBJ)

$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re