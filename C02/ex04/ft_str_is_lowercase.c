/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 12:58:19 by rfukuda           #+#    #+#             */
/*   Updated: 2022/01/09 03:23:36 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 'a' && str[0] <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}

int 	main(void)
{
	char	r[] = {"sDsdf"};
	
    if ((ft_str_is_lowercase(r)) == 1)
		ft_putstr("文字列が小文字のアルファベットのみである場合");
	else
		ft_putstr("文字列に他の文字が含まれる場合");
	return (0);
}
*/
