
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wasman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 09:26:58 by wasman            #+#    #+#              #
#    Updated: 2016/09/21 13:37:49 by wasman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
NAME = libft.a
BLDLIB = ar rc
SORT = ranlib

IDIR = ./includes/
SRCDIR = ./srcs/
MAINDIR = ./mains/

SOURCES =	ft_putchar.c\
			ft_putstr.c\

MAINS = mains/ft_putchar_main.c\
		mains/ft_putstr_main.c\

OBJ =	$(SOURCES:.c=.o)

EXEXS = $(SOURCES:.c=)

all: $(NAME)

build: $(NAME) $(TEST)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCES) -I$(IDIR)
	$(BLDLIB) $(NAME) $(OBJ)
	$(SORT) $(NAME)

$(TEST):
	$(CC) $(CFLAGS) $(MAINS)
	$(CC) -o $(OBJ) $(MAINS) 

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f rm $(NAME)

re: fclean all
