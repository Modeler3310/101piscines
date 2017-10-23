# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guibayle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 14:09:29 by guibayle          #+#    #+#              #
#    Updated: 2017/10/17 21:15:27 by guibayle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr srcs/ft_strcmp srcs/ft_swap.c 
srcs/ft_strlen.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRCS)
	ar rc $(NAME) $(wildcard *.o)
	ranlib $(NAME)


clean:
	rm -f $(wildcard *.o)

fclean: clean
	rm -f $(NAME)

re: fclean all 
