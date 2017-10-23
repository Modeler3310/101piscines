/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 12:11:36 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/22 14:40:33 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
void     rush00(int x, int y);

int        main(int argc, char **argv)
{
	argc = 0;
	rush00(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
