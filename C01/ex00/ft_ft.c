/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:31:33 by rfukuda           #+#    #+#             */
/*   Updated: 2022/01/09 03:25:29 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb) 
{
	int		temp;
	int		size;

	size = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{	
		ft_putchar('2');
		nb = 147483648;
	}
	temp = nb;
	while ((temp /= 10) > 0)
		size *= 10;
	temp = nb;
	while (size)
	{
		ft_putchar((char)(temp / size) + '0');
		temp %= size;
		size /= 10;
	}
}

/*
int		main(void)
{
	int		i;

	i = 21;
	ft_ft(&i);
	ft_putnbr(i);
	
	return (0);
}
*/
