/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 13:04:21 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/22 17:51:27 by latilemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
//# define BUF_SIZE 4096
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int a);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
char	*ft_strcat(char *dest, char *src);

char	*ft_print_line00(int width, char a, char b, char c);
char	*rush00(int width, int height);
char	*ft_print_line01(int width, char a, char b, char c);
char	*rush01(int width, int height);
char	*ft_print_line02(int width, char a, char b, char c);
char	*rush02(int width, int height);
char	*ft_print_line03(int width, char a, char b, char c);
char	*rush03(int width, int height);
char	*ft_print_line04(int width, char a, char b, char c);
char	*rush04(int width, int height);

#endif
