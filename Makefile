# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/30 06:54:37 by cde-voog          #+#    #+#              #
#    Updated: 2023/05/07 23:40:04 by cde-voog         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

COMPILE = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_hexmin.c ft_hexmaj.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_adress.c ft_putnbru.c

OUTPUT = -o

LIBRARY = rc libftprintf.a ft_*.o

OBJ = $(SRCS:.c=.o)

CLEANCMD = rm -rf *.o
FCLEANCMD = rm -rf *.a

$(NAME):$(OBJ)
	$(COMPILE) $(CFLAG) -c $(SRC)
	ar rcs libftprintf.a ft_*.o

all:$(NAME)

%.o:%.c
	$(COMPILE) $(CFLAG) -c $< -o $@

clean:
	$(CLEANCMD)

fclean: clean
	$(FCLEANCMD)

re: fclean all
