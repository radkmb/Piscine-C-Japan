/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 11:58:41 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/17 11:59:13 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial_recursive(int factorial, int number)
{
	factorial = factorial * number;
	number--;
	if (number > 0)
		return (ft_recursive_factorial_recursive(factorial, number));
	return (factorial);
}

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (ft_recursive_factorial_recursive(1, nb));
}
