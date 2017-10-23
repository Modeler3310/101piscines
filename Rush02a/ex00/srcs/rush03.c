/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 19:15:51 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/22 15:57:33 by wdrye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define BUF_SIZE 4096
#include <stdlib.h>

void	ft_putchar(char c);

char	*ft_print_line03(int width, char first, char mid, char last)
{
	int		i;
	char	*str;
	int		j;

	if (!(str = malloc(sizeof(str) * (BUF_SIZE + 1))))
		return (NULL);
	j = 0;
	if (width == 1)
		str[j] = first;
	if (width <= 0)
		return (NULL);
	if (width > 1)
	{
		str[j] = first;
		i = 0;
		while (i < width - 2)
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

char	*rush03(int width, int height)
{
	int	i;

	if (height == 1)
	{
		ft_print_line03(width, 'A', 'B', 'C');
	}
	if (height > 1)
	{
		ft_print_line03(width, 'A', 'B', 'C');
		i = 0;
		while (i < height - 2)
		{
			ft_print_line03(width, 'B', ' ', 'B');
			i = i + 1;
		}
		ft_print_line03(width, 'A', 'B', 'C');
	}
	return (NULL);
}
