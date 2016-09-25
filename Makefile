
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
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
BLDLIB = ar rc
SORT = ranlib

SOURCES =	ft_putchar.c\
			ft_putstr.c\
			ft_putnbr.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_isspaces.c\
			ft_putendl.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strlen.c\
			ft_putstr_fd.c\
			ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_atoi.c

OBJ =	$(SOURCES:.c=.o)

TESTS = test/$(SOURCES)

all: $(NAME)

$(NAME):
	$(CC) -c $(CFLAGS) $(SOURCES)
	$(BLDLIB) $(NAME) $(OBJ)
	$(SORT) $(NAME)

build: all
	$(CC) $(CFLAGS) $(NAME)

norm: fclean
	norminette $(SOURCES)

testit: all build
	./a.out

clean: all
	/bin/rm -f $(OBJ)

clr:
	/bin/rm -rf a.out

fclean: clean clr
	/bin/rm -f rm $(NAME)

re: fclean all
