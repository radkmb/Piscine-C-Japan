/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 11:56:18 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/17 13:03:20 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	if (nb == 0)
		return (result);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
