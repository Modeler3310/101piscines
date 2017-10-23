/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 12:21:04 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/06 13:40:34 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (nb < 0 || nb > 12)
		return (0);
	while (nb == 1)
		return (1);
	while (i <= nb)
	{
		j *= i;
		i++;
	}
	return (j);
}
