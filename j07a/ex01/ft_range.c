/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 23:35:57 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/12 23:36:18 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tbl;

	if (min >= max)
		tbl = NULL;
	if (!(tbl = (int*)malloc(sizeof(int) * (max - min))))
		return (0);
	i = 0;
	while (min < max)
		tbl[i++] = min++;
	return (tbl);
}
