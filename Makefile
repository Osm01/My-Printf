NAME := libftprintf.a
CC : cc
CFLAGS : -Wall -Wextra -Werror
SRC := ft_convert_hex.c ft_printf.c ft_putchar.c \
ft_putnbr.c ft_putnbr_unsigned.c ft_putstr.c
SRC_OBJ := $(SRC:.c=.o)
all : $(NAME)
$(NAME) : $(SRC_OBJ)
	ar -rc $(NAME) $(SRC_OBJ)
clean :
	rm -f $(SRC_OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY : all clean fclean re
