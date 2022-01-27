/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 03:13:41 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/24 03:17:26 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char_write(char c)
{
	write(1, &c, 1);
}

void	ft_number_write(int number)
{
	if (number == -2147483648)
	{
		ft_number_write(number / 10);
		ft_char_write('8');
	}
	else if (number < 0)
	{
		ft_char_write('-');
		ft_number_write(-number);
	}
	else
	{
		if (number > 9)
			ft_number_write(number / 10);
		ft_char_write('0' + number % 10);
	}
}

void	ft_str_write(char *str)
{
	while (*str)
	{
		ft_char_write(*str);
		str++;
	}
}
