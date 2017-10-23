# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guibayle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/21 13:17:34 by guibayle          #+#    #+#              #
#    Updated: 2017/10/22 19:41:32 by wdrye            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = srcs/rush00.c \
	  srcs/ft_putchar.c srcs/ft_atoi.c main02.c srcs/ft_putnbr.c srcs/ft_strcmp.c \
	  srcs/ft_putstr.c srcs/ft_strcat.c \

FLAGS = -Wall -Werror -Wextra

INCLUDES = includes/

all: $(NAME)

$(NAME):
	gcc -I $(INCLUDES) $(FLAGS) $(SRC) -o $(NAME)

clean : 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
