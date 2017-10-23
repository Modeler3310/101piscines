/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 17:20:51 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/19 23:16:19 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		ft_putchar(*str++);
	}
}

void	ft_bad_name(char *str, int ferrno)
{
	if (ferrno == ENOENT)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(str);
		ft_putstr(": No such file or directory\n");
	}
	else if (ferrno == EISDIR)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(str);
		ft_putstr(": Is a directory\n");
	}
	else if (ferrno == EACCES)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(str);
		ft_putstr(": Permission denied\n");
	}
}

void	disp_stdin(void)
{
	char	buffer;

	while (read(0, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ac < 2 || av[1][0] == '-')
		disp_stdin();
	av++;
	while (*av)
	{
		fd = open(*av, O_RDWR);
		if (fd == -1)
			ft_bad_name(*av, errno);
		else
			while ((ret = read(fd, buf, BUF_SIZE)))
			{
				buf[ret] = '\0';
				write(1, buf, ret);
			}
		close(fd);
		av++;
	}
	return (errno);
}
