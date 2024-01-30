NAME = libftprintf.a

SRC = 	ft_exadecimal.c \
		ft_pointer.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putnub.c \
		ft_putstr.c \


CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re