/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:05:51 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/17 12:06:13 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power_recursive(int nb, int power, int result)
{
	if (power-- > 0)
	{
		result = result * nb;
		return (ft_recursive_power_recursive(nb, power, result));
	}
	return (result);
}

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	return (ft_recursive_power_recursive(nb, power, 1));
}
