/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 13:28:43 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/20 20:51:01 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

void	ft_str_sort(char **arr, int size){
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (ft_strcmp(arr[i], arr[j]) > 0)
			{
				ft_swap(&arr[i], &arr[j]);
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc > 2)
		ft_str_sort(argv, argc);
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
	}
}
