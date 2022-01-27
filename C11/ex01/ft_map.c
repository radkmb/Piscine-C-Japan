/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 02:59:04 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/27 05:47:20 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*copy_tab;

	copy_tab = (int *)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		copy_tab[i] = f(tab[i]);
		i++;
	}
	return (copy_tab);
}
