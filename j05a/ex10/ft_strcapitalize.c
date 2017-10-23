/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 16:53:14 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/10 18:35:28 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next;

	i = 0;
	next = 1;
	while (str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122) ||
				(str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= '0' && str[i] <= '9'))
		{
			if (next && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			if (!next && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			next = 0;
		}
		else
			next = 1;
		i++;
	}
	return (str);
}
