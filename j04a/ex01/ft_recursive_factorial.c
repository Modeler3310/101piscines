/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:42:04 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/08 21:51:09 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 13)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (nb);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	ft_putchar(ft_recursive_factorial(9) + 48);
	return(0);
}
