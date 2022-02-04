/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 22:32:02 by tuehara           #+#    #+#             */
/*   Updated: 2020/02/09 19:39:44 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int a, int b)
{
	int y;
	int x;

	y = 1;
	while (y <= b)
	{
		x = 1;
		while (x <= a)
		{
			if (x == 1 && (y == 1 || y == b))
				ft_putchar('o');
			if ((x == a && x != 1) && (y == 1 || y == b))
				ft_putchar('o');
			if (((b > y && y > 1) && x == 1) || ((y > 1 && y < b) && x == a))
				ft_putchar('|');
			if (((y == b && x > 1) && x < a) || ((y == 1 && x > 1) && x < a))
				ft_putchar('-');
			if ((b > y && y > 1) && (a > x & x > 1))
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
