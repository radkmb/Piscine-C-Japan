/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 11:14:30 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/18 14:40:16 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	i;

	final_length = 0;
	i = 0;
	while (i < size)
	{
		final_length += ft_str_length(strings[i]);
		final_length += sep_length;
		i++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		i;
	char	*strs_head;
	char	*string;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_final_length(strs, size, ft_str_length(sep));
	if (!(string = (char *)malloc((full_length + 1) * sizeof(char))))
		return (0);
	strs_head = string;
	i = 0;
	while (i < size)
	{
		ft_strcpy(strs_head, strs[i]);
		strs_head += ft_str_length(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(strs_head, sep);
			strs_head += ft_str_length(sep);
		}
		i++;
	}
	*strs_head = '\0';
	return (string);
}
