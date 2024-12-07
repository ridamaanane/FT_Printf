CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_print_char.c ft_print_string.c ft_print_pointer.c ft_print_nbr.c \
	  ft_print_hexa_lower.c ft_print_hexa_upper.c ft_print_unsigned.c ft_printf.c \	

OBJ = $(SRC:%.c=%.o)
NAME = libftprintf.a
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	@ar rsc $@ $?

clean:
	@$(RM) *.o

fclean: clean
	@$(RM) libftprintf.a

re: fclean $(NAME)

.PHONY: all clean fclean re
