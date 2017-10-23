/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 19:15:51 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/08 19:47:04 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line03(int width, char a, char b, char c)
{
	int	i;

	if (width == 1)
	{
		ft_putchar(a);
	}
	if (width <= 0)
		return ;
	if (width > 1)
	{
		ft_putchar(a);
		i = 0;
		while (i < width - 2)
		{
			ft_putchar(b);
			i++;
		}
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	rush03(int width, int height)
{
	int	i;

	if (height == 1)
	{
		ft_print_line03(width, 'A', 'B', 'C');
	}
	if (height > 1)
	{
		ft_print_line03(width, 'A', 'B', 'C');
		i = 0;
		while (i < height - 2)
		{
			ft_print_line03(width, 'B', ' ', 'B');
			i = i + 1;
		}
		ft_print_line03(width, 'A', 'B', 'C');
	}
}
