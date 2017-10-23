/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 00:05:57 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/22 19:41:15 by wdrye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define BUF_SIZE 4096
#include <stdlib.h>

void	ft_putchar(char c);
char 	*ft_strcat(char *dest, char *src);

char	*ft_print_line0(int width, char first, char mid, char last)
{
	int		i;
	char	*str;
	int		j;

	if (!(str = malloc(sizeof(str) * (BUF_SIZE + 1))))
		return (NULL);
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
	str[j + 1] = '\n';
//	ft_putchar('\n');
	str[j + 2] = '\0';
	return (str);
}

char	*rush00(int width, int height)
{
	int	i;
	char *string;
	
	write(1, "ah!", 3);
	if (!(string = malloc(sizeof(char) * (width * height) + 1)))
		return (NULL);
	if (height == 1)
	{
		ft_strcat(string, ft_print_line0(width, 'o', '-', 'o'));
	}
	if (height > 1)
	{
		ft_strcat(string, ft_print_line0(width, 'o', '-', 'o'));
		i = 0;
		while (i < height - 2)
		{
			ft_strcat(string, ft_print_line0(width, '|', ' ', '|'));
			i++;
		}
		ft_strcat(string, ft_print_line0(width, 'o', '-', 'o'));
	}
	return (string);
}
