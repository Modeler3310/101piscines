/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 16:55:29 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/12 20:43:12 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*lonj(int n, char **argv)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	while (j++ < n)
	{
		while (argv[j][i] != '\0')
			i++;
		i++;
	}
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		k;
	int		i;
	int		j;

	if (!(str = (char*)malloc(sizeof(str) * lonj(argc, argv) + 1)))
		return (NULL);
	j = 1;
	k = 0;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			str[k++] = argv[j][i++];
		}
		str[k++] = '\n';
		j++;
	}
	return (str);
}
