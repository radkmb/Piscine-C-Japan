/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 13:23:07 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/17 13:23:17 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putargv(char *argv)
{
	while (*argv)
	{
		write(1, argv, 1);
		argv++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		ft_putargv(argv[i]);
		ft_putargv("\n");
	}
}
