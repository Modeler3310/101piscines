/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 13:53:23 by guibayle          #+#    #+#             */
<<<<<<< HEAD:ex00/rush_02.c
/*   Updated: 2017/10/22 20:07:52 by guibayle         ###   ########.fr       */
=======
/*   Updated: 2017/10/22 19:56:37 by wdrye            ###   ########.fr       */
>>>>>>> f0535a177613a7ae5d4b1c7f1132ab2561277c60:ex00/main02.c
/*   Updated: 2017/10/21 21:56:27 by wdrye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
# define BUF_SIZE 4096

void	display(int col, int li, int i)
{
	int	match;

	match = 0;
	write(1, "disp", 4);
	if (match > 1)
	{
		ft_putstr("|| colle-0");
		ft_putnbr(i);
		ft_putstr("] [");
		ft_putnbr(col);
		ft_putstr("] [");
		ft_putnbr(li);
		ft_putstr("]");
	}
	else if (match == 1)
	{
		ft_putstr("colle-0");
		ft_putnbr(i);
		ft_putstr("] [");
		ft_putnbr(col);
		ft_putstr("] [");
		ft_putnbr(li);
		ft_putstr("]");
	}
	else
		ft_putchar('\n');
	match++;
}

char	*lecture(int *li, int *col)
{
	char	buf[BUF_SIZE];
	char	*str;
	int		i;
	int		*a;

	a = 0;
	i = 0;
	str = (char*)malloc(sizeof(char) * (BUF_SIZE + 1));
	while ( str = read(0, &buf, 1))
	{
		write(1, "lect", 4);
		col = a;
		if (*buf == '\n')
		{
<<<<<<< HEAD:ex00/rush_02.c
			a = 0;
			(*li)++;
=======
			col = 0;
			(li)++;
>>>>>>> f0535a177613a7ae5d4b1c7f1132ab2561277c60:ex00/main02.c
		}
		else
			a++;
		str[i] = buf;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char 	*comp(char *str, int col, int li)
{
	int		match;
	char	*tmp0;
//	char	*tmp1;
//	char	*tmp2;
//	char	*tmp3;
//	char	*tmp4;

	write(1, "comp", 4);
	tmp0 = rush00(col, li);
//	tmp1 = rush01(col, li);
//	tmp2 = rush02(col, li);
//	tmp3 = rush03(col, li);
//	tmp4 = rush04(col, li);

	match = 0;
	if (ft_strcmp(str, rush00(col, li)) == 0)
		display(col, li, 0);
//	if (ft_strcmp(str, tmp1) == 0)
//		display(col, li, 1);
//	if (ft_strcmp(str, tmp2) == 0)
//		display(col, li, 2);
//	if (ft_strcmp(str, tmp3) == 0)
//		display(col, li, 3);
//	if (ft_strcmp(str, tmp4) == 0)
//		display(col, li, 4);
	else if (match == 0)
		ft_putstr("aucune");
	free(tmp0);	
//	free(tmp1);	
//	free(tmp2);
//	free(tmp3);	
//	free(tmp4);	
	return (NULL);
}


int		main(int argc, char **argv)
{
	int	li;
	int	col;
	char	*ret;

<<<<<<< HEAD:ex00/rush_02.c
	li = 0;
	col = 0;
	ret = comp(&col, &li);
	if ((li * col) >= 30000000)
	{
=======
	li = ft_atoi(argv[2]);
	col = ft_atoi(argv[1]);
	ret = lecture(&col, &li);
	if (argc != 3)
>>>>>>> f0535a177613a7ae5d4b1c7f1132ab2561277c60:ex00/main02.c
		ft_putstr("aucune");
//	if ((li * col) >= BUF_SIZE + 1)
//	{
//		ft_putstr("aucune");
//		return (1);
//	}
	write(1, "main", 4);
	comp(ret, col, li);
	ft_putchar('\n');
}
