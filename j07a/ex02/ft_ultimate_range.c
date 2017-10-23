/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 14:30:39 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/12 23:41:43 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tbl;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!tbl)
		return (0);
	tbl = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
		tbl[i++] = min++;
	return (max - min);
}
