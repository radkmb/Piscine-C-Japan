/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 03:55:47 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/24 03:55:48 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.h"

void	print(void)
{
	g_last_lines = 1;
	if (ft_is_equal(g_buf, g_buf_prev))
	{
		if (!g_duplicated)
		{
			g_duplicated = 1;
			ft_putstr("*\n");
		}
	}
	else
	{
		g_duplicated = 0;
		print_input_offset(7, g_offset);
		print_hexadecimal_bytes(g_buf, 8 * (g_cnt / 8) + g_cnt);
		print_hexadecimal_bytes(g_buf + 8, g_cnt - 8);
		if (g_is_on_flag_c)
			print_characters(g_buf, g_cnt);
		ft_putchar('\n');
		free(g_buf_prev);
		g_buf_prev = g_buf;
		g_buf = (char*)malloc(17);
	}
	g_offset += 16;
	g_cnt = 0;
}

void	print_input_offset(int n, int offset)
{
	if (!offset)
	{
		n += g_is_on_flag_c;
		while (n--)
			ft_putchar('0');
		return ;
	}
	print_input_offset(n - 1, offset >> 4);
	ft_putchar(g_hex[(offset & 15)]);
}

void	print_hexadecimal_bytes(char *str, int size)
{
	int i;
	int tmp;

	if (g_is_on_flag_c)
		ft_putchar(' ');
	i = 0;
	while (i < size && i < 8)
	{
		ft_putchar(' ');
		tmp = str[i];
		ft_putchar(g_hex[(tmp / 16)]);
		ft_putchar(g_hex[(tmp % 16)]);
		++i;
	}
	while (i++ < 8)
		ft_putstr("   ");
}

void	print_characters(char *str, int len)
{
	int i;

	ft_putstr("  |");
	i = 0;
	while (i < len)
	{
		if (is_printable(str[i]))
			ft_putchar(str[i]);
		else
			ft_putchar('.');
		++i;
	}
	ft_putchar('|');
}

void	print_error_msg(char *file)
{
	ft_putstr(basename(g_prog));
	ft_putstr(": ");
	ft_putstr(file);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putchar('\n');
	errno = 0;
}
