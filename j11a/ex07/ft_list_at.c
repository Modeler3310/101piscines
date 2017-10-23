/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 19:23:04 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/18 19:29:03 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	if (!begin_list)
		return (NULL);
	while (i < nbr)
	{
		i = 0;
		if (begin_list->next)
			begin_list->next = begin_list;
		else
			return (NULL);
		i++;
	}
	return (begin_list);
}
