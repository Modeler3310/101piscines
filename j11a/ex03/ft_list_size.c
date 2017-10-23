/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:48:55 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/18 13:47:32 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		j;

	tmp = begin_list;
	if (tmp)
	{
		j = 1;
		while (tmp->next)
			tmp = tmp->next;
		j++;
	}
	return (j);
}
