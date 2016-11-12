# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarriel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/20 12:11:09 by abarriel          #+#    #+#              #
#    Updated: 2016/08/20 13:10:08 by abarriel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	srcs/ft_swap.c 
INC = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:	$(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) $(INC)

clean:
	rm -f $(INC)

fclean: clean
	rm -f $(NAME)

re: fclean all

