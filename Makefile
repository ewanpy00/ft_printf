# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Project files
NAME = libftprintf.a
SRCS =	ft_printf.c \
		utils.c \
		ft_printf_hex_upper.c \
		ft_printf_hex_lower.c \
		ft_printf_char.c \
		ft_printf_str.c \
		ft_printf_int.c \
		ft_printf_unsigned.c \
		ft_printf_decimal.c \
		ft_printf_ptr.c
OBJS = $(SRCS:.c=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all