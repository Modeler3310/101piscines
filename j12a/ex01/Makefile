# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guibayle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/19 11:38:06 by guibayle          #+#    #+#              #
#    Updated: 2017/10/19 22:36:50 by guibayle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

INCLUDES_DIR = includes/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -I $(INCLUDES_DIR) $(FLAGS) main.c -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

