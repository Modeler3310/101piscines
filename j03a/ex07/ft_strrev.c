/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 16:18:00 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/05 23:10:33 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	i;
	int	a;
	int	b;

	a = 0;
	while (str[a] != '\0')
		a++;
	if (b < a / 2)
	{
		i = str[a - (b + 1)];
		str[a - (b + 1)] = str[b];
		str[b] = i;
		b++;
	}
	return (str);
}