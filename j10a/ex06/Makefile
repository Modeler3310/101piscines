# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guibayle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/17 21:04:36 by guibayle          #+#    #+#              #
#    Updated: 2017/10/17 21:50:04 by guibayle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = fonction.c main.c signe.c ft_atoi.c

HEAD = header.h

all : $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC) -I $(HEAD)

clean:
	/bin/rm -f $(NAME)

re: 
	make clean all
