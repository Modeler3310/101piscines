/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 19:10:15 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/08 19:46:18 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line02(int width, char a, char b, char c)
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

void	rush02(int width, int height)
{
	int	i;

	if (height == 1)
	{
		ft_print_line02(width, 'A', 'B', 'A');
	}
	if (height > 1)
	{
		ft_print_line02(width, 'A', 'B', 'A');
		i = 0;
		while (i < height - 2)
		{
			ft_print_line02(width, 'B', ' ', 'B');
			i = i + 1;
		}
		ft_print_line02(width, 'C', 'B', 'C');
	}
}
