/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 14:40:48 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/07 23:37:43 by guibayle         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		nb = 2;
	i = nb;
	while (i < nb * 2)
	{
		if (ft_is_prime(i))
			return (i);
	}
	return (0);
}
