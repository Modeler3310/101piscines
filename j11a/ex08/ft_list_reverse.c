/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 19:29:44 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/18 21:18:57 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*inv;

	if (*begin_list)
	{
		tmp = *begin_list->next;
		*begin_list->next = inv;
		inv = *begin_list;
		*begin_list = tmp;
	}
	*begin_list = inv;
}
