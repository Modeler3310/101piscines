/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 15:24:15 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/09 15:24:37 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
	char    *s1;
	char    *s2;

	s1 = "toto@8===";
	s2 = "8";

	printf("%s\n", ft_strstr(s1, s2));
	return (0);
}
