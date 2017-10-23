/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 19:12:18 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/17 21:52:12 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	void	(*f[5])(int, int);

	f[0] = add;
	f[1] = soustr;
	f[2] = multi;
	f[3] = div;
	f[4] = modulo;
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			f[0](ft_atoi(argv[1]), ft_atoi(argv[3]));
		if (argv[2][0] == '-')
			f[1](ft_atoi(argv[1]), ft_atoi(argv[3]));
		if (argv[2][0] == '*')
			f[2](ft_atoi(argv[1]), ft_atoi(argv[3]));
		if (argv[2][0] == '/')
			f[3](ft_atoi(argv[1]), ft_atoi(argv[3]));
		if (argv[2][0] == '%')
			f[4](ft_atoi(argv[1]), ft_atoi(argv[3]));
		else if (argv[2][0] != '/' && argv[2][0] != '*' && argv[2][0] != '+' &&
			argv[2][0] != '-' && argv[2][0] != '%')
			f[0](0, 0);
	}
	return (0);
}
