/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 04:50:35 by rfukuda           #+#    #+#             */
/*   Updated: 2022/01/11 01:31:57 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

#define NO_MATCH -1

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

bool	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ');
}

bool	is_base_valid(char *str)
{
	char	*curr;
	int		i1;
	int		i2;

	curr = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (false);
	while (*curr)
	{
		if (is_space(*curr) || *curr == '+' || *curr == '-')
			return (false);
		curr++;
	}
	i1 = 0;
	while (i1 < curr - str)
	{
		i2 = i1 + 1;
		while (i2 < curr - str)
			if (str[i1] == str[i2++])
				return (false);
		i1++;
	}
	return (true);
}

int		resolve_base(char *base, char match)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == match)
			return (i);
		i++;
	}
	return (NO_MATCH);
}

int		ft_atoi_base(char *str, char *base)
{
	int	radix;
	int	result;
	int	minus;
	int	resolved;

	if (!is_base_valid(base))
		return (0);
	radix = ft_strlen(base);
	result = 0;
	minus = 1;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while ((resolved = resolve_base(base, *str)) != NO_MATCH)
	{
		result *= radix;
		result += resolved;
		str++;
	}
	return (result * minus);
}

/*
#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int		main(void)
{
	char str[255];
	char base[255];
	printf("str:");
	scanf("%s",str);
    printf("base:");
    scanf("%s",base);
    printf("%d",ft_atoi_base(str,base));
	return (0);
}
*/
