# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wasman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/23 00:54:09 by wasman            #+#    #+#              #
#    Updated: 2016/09/23 17:04:17 by wasman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = test.c
LIBH = libft.h

SOURCES = ft_putchar.c\
		  ft_putstr.c\

OBJ = $(SOURCES:.c=.o)

FUNC = ~/libft/$(SOURCES)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCES) $(FUNC)
	
clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bim/rm -f rm $(NAME)

re: fclean all
