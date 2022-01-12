/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:08:45 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/17 12:09:08 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return ((index == 0 || index == 1) ?
			index : ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
