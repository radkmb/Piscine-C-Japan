/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 03:54:50 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/24 03:54:51 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_H
# define EX02_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <libgen.h>
# include <errno.h>
# include <string.h>

extern char *g_prog;

void	ft_putstr(char *str);
void	print_error_msg(char *file);
int		ft_atoi(char *str);

#endif
