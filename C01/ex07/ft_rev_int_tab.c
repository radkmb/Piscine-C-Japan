/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 08:17:28 by rfukuda           #+#    #+#             */
/*   Updated: 2022/01/09 03:28:36 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int mid;
	int i;

	i = 0;
	mid = size / 2;
	while (i < mid)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}
