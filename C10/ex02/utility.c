/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 03:55:17 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/24 03:55:18 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex02.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	print_error_msg(char *file)
{
	ft_putstr(basename(g_prog));
	ft_putstr(": ");
	ft_putstr(file);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
}

int		ft_atoi(char *str)
{
	int ret;

	ret = 0;
	while (*str)
	{
		ret *= 10;
		ret += (*(str++) - '0');
	}
	return (ret);
}
