/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 14:06:17 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/06 15:27:00 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	while (power < 0)
		return (0);
	while (power == 0)
		return (1);
	while (power)
	{
		i *= nb;
		power--;
	}
	return (i);
}
