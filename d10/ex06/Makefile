# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarriel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/20 18:29:23 by abarriel          #+#    #+#              #
#    Updated: 2016/08/20 18:29:25 by abarriel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = ft_atoi.c ft_putchar.c ft_putnbr.c \
      ft_putstr.c ft_strcmp.c

all:	$(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra do_op.c ft_atoi.c ft_putchar.c \
	ft_putnbr.c ft_putstr.c ft_strcmp.c \
	ft_calc.c -o do-op

clean: 
	rm -f $(NAME)

re: clean all

