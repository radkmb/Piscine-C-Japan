/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 10:09:14 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/13 10:10:06 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 'A' && str[0] <= 'Z'))
		{
			if (!(str[0] >= 'a' && str[0] <= 'z'))
				return (0);
		}
		str++;
	}
	return (1);
}
