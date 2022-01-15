/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 13:19:05 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/17 13:19:13 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *argv)
{
	while (*argv)
	{
		write(1, argv, 1);
		argv++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 0)
		ft_putstr(argv[0]);
	write(1, "\n", 1);
}
