/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 12:07:52 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/13 23:21:51 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		leng(char *str, int i)
{
	int	j;

	j = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}

int		mot(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' &&
				str[i] != '\0')
		{
			j = 0;
			i++;
		}
		if ((str[i] == '\0' || str[i] != '\n' || str[i] != '\t' ||
					str[i] != ' ') && j == 0)
		{
			k++;
			j = 1;
		}
		i++;
	}
	return (k);
}

char	**ft_split_whitespaces(char *str)
{
	char	**ret;
	int		i;
	int		j;
	int		k;

	if (!(ret = (char**)malloc(sizeof(ret) * (mot(str)) + 1)))
		return (NULL);
	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i])
			i++;
		if (str[i] != '\0')
		{
			j = 0;
			if (!(ret[k] = (char*)malloc(sizeof(str) * leng(str, i) + 1)))
				return (NULL);
			while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
				ret[k][j++] = str[i++];
			ret[k++][j] = '\0';
		}
	}
	ret[k] = NULL;
	return (ret);
}
