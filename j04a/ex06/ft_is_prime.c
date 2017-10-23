/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 10:23:52 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/07 23:03:23 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 2;
	j = 1;
	while (j != 50000)
	{
		if (nb % i == 0)
			i++;
		if (i == 3)
			return (0);
		j++;
	}
	return (1);
}