/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 13:26:51 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/17 13:26:59 by rfukuda          ###   ########.fr       */
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
		ft_putargv(argv[argc - i]);
		ft_putargv("\n");
	}
}
