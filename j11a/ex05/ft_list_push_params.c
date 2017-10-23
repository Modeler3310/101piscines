/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:56:31 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/18 23:33:06 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*tmp;
	t_list	*i;
	int		j;

	tmp = NULL;
	i = NULL;
	j = 1;
	while (j < ac)
	{
		tmp = ft_create_elem(av[j]);
		tmp->next = i;
		i = tmp;
		j++;
	}
	return (tmp);
}
