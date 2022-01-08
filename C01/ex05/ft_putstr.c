/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:47:41 by rfukuda           #+#    #+#             */
/*   Updated: 2022/01/09 03:27:48 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int len;

	len = 0;
	while (str[len])
		++len;
	write(1, str, len);
}

/*
int 	main(void)
{
	char	t[] = {"Hello\n"};

	ft_putstr(t);

	return (0);
}
*/
