/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 02:58:46 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/25 11:45:59 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

#include <stdio.h>

void putnbr(int n)
{
	printf("%d,", n);
}
int main()
{
	int test1[] = {1,2,3,4,5};
 	int test2[] = {-25,0,20,45};
 	int test3[] = {5};

	ft_foreach(test1, 5, putnbr);
	printf("\n");
 	ft_foreach(test2, 5, putnbr);
 	printf("\n");
	ft_foreach(test3, 1, putnbr);
	printf("\n");
}