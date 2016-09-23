# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wasman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/23 00:54:09 by wasman            #+#    #+#              #
#    Updated: 2016/09/23 16:00:28 by wasman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = test.c
LIBH = libft.h

SOURCES = test_ft_putchar.c\

OBJ = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCES) $(LIBH) -o $(NAME)
	
clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bim/rm -f rm $(NAME)

re: fclean all
