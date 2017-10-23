/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 12:01:24 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/12 21:58:45 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str)
{
	int	rs;
	int	i;

	rs = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			if (str[i] != '\0')
				i++;
			else
				break ;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		rs++;
	}
	return (rs);
}

char	*first_str(char *str, int *index)
{
	int		i;
	int		start;
	char	*rs;
	int		end;

	start = *index;
	i = start;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	end = i;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	*index = i;
	i = -1;
	rs = (char*)malloc(end - start + 1);
	while (++i < end - start)
		rs[i] = str[start + i];
	rs[i] = '\0';
	return (rs);
}

char	**ft_split_whitespaces(char *str)
{
	char	**rs;
	int		i;
	int		word_c;
	int		index;

	word_c = count_words(str);
	if (!(rs = (char**)malloc(sizeof(char*) * (word_c + 1))))
		return (NULL);
	i = 0;
	index = 0;
	while (str[0] == ' ' || str[0] == '\t' || str[0] == '\n')
		str++;
	while (str[i] != '\0')
		rs[index++] = first_str(str, &i);
	rs[index] = 0;
	return (rs);
}
