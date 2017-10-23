/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibayle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 22:16:02 by guibayle          #+#    #+#             */
/*   Updated: 2017/10/19 23:24:44 by guibayle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# define BUF_SIZE 4096

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_bad_name(char *str, int ferrno);
void	disp_stdin(void);

#endif
