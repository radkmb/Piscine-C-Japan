/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 21:41:43 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/11 12:26:25 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	no;

	if (n < 0)
	{
		no = 'N';
		write(1, &no, 1);
	}
	else if (n >= 0)
	{
		no = 'P';
		write(1, &no, 1);
	}
}
