/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 23:41:24 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/16 02:10:53 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int fi;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		fi = 0;
		while (to_find[fi] == str[i + fi])
		{
			if (to_find[fi + 1] == '\0')
			{
				return (&str[i]);
			}
			fi++;
		}
		i++;
	}
	return (0);
}
