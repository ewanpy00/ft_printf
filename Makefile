# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 20:45:05 by ivan              #+#    #+#              #
#    Updated: 2025/11/26 20:47:53 by ivan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
SRCS =	ft_printf.c \
		utils.c \
		ft_printf_hex_upper.c \
		ft_printf_hex_lower.c \
		ft_printf_char.c \
		ft_printf_str.c \
		ft_printf_unsigned.c \
		ft_printf_decimal.c \
		ft_printf_ptr.c
OBJS = $(SRCS:.c=.o)

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

.PHONY: all clean fclean re