# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tifuret <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:27:32 by tifuret           #+#    #+#              #
#    Updated: 2017/11/07 17:26:16 by tifuret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putchar.c \
	  ft_putstr.c \
	  ft_strcmp.c \
	  ft_strlen.c \
	  ft_swap.c \
	  ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \

OBJ = ft_putchar.o \

HEADER = libft.h

all: $(NAME)

$(NAME):
		gcc -c $(SRC) -I $(HEADER)
		ar rc libft.a $(OBJ)

clean:
		/bin/rm -f *.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
