/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 14:28:12 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/17 22:05:25 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*j;

	if (!(j = (int*)malloc(sizeof(*tab) * (length + 1))))
		return (0);
	i = 0;
	while (i < length)
	{
		j[i] = f(tab[i]);
		i++;
	}
	j[i] = '\0';
	return (j);
}
