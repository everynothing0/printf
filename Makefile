# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/30 06:54:37 by cde-voog          #+#    #+#              #
#    Updated: 2023/04/30 07:13:09 by cde-voog         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILE = gcc
CFLAG = -Wall -Werror -Wextra
SRC = ft_*.c
OUTPUT = -o
LIBRARY = rc libftprintf.a ft_*.o
NAME = libftprintf.a
OBJ = $(src:.c=.o)

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
