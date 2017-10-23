/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signe.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 18:42:43 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/17 21:28:02 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	modulo(int i, int j)
{
	if (j == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
		ft_putnbr(i % j);
}

void	multi(int i, int j)
{
	ft_putnbr(i * j);
	ft_putchar('\n');
}

void	soustr(int i, int j)
{
	ft_putnbr(i - j);
	ft_putchar('\n');
}

void	add(int i, int j)
{
	ft_putnbr(i + j);
	ft_putchar('\n');
}

void	div(int i, int j)
{
	if (j == 0)
		ft_putstr("Stop : division by zero\n");
	else
		ft_putnbr(i / j);
}
