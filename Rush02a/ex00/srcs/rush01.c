/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 00:05:57 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/22 15:58:39 by wdrye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define BUF_SIZE 4096
#include <stdlib.h>

void	ft_putchar(char c);

char	*ft_print_line(int width, char first, char mid, char last)
{
	int		i;
	char	*str;
	int		j;

	if (!(str = malloc(sizeof(str) * (BUF_SIZE + 1))))
		return (0);
	j = 0;
	if (width == 1)
	{
		str[j] = first;
	}
	if (width <= 0)
		return (NULL);
	if (width > 1)
	{
		str[j] = first;
		i = 0;
		while (i < width - 1)
		{
			j++;
			str[j] = mid;
			i++;
		}
		str[j] = last;
	}
	str[j + 1] = '\0';
	ft_putchar('\n');
	return (str);
}

char	*rush01(int width, int height)
{
	int	i;

	if (height == 1)
	{
		ft_print_line(width, '/', '*', '\\');
	}
	if (height > 1)
	{
		ft_print_line(width, '/', '*', '\\');
		i = 0;
		while (i < height - 2)
		{
			ft_print_line(width, '*', ' ', '*');
			i = i + 1;
		}
		ft_print_line(width, '\\', '*', '/');
	}
	return (NULL);
}
