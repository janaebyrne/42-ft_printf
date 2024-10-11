# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 10:06:50 by jbyrne            #+#    #+#              #
#    Updated: 2024/02/08 16:00:00 by jbyrne           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS =  ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_printformat.c ft_strlen.c ft_printf.c ft_printptr.c ft_putptr.c ft_printformat.c ft_putnbr_hex.c ft_putunsigned.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: $(NAME)
	$(CC) $(CFLAGS) main.c libftprintf.a && ./a.out

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
