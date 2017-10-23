/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 11:33:58 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/17 14:32:30 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	j;

	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}