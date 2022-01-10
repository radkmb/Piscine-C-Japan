/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 23:43:14 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/16 02:14:49 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int di;
	unsigned int r;

	di = 0;
	r = 0;
	while (dest[di] != '\0')
		di++;
	while (src[r] != '\0')
		r++;
	if (size <= di)
		r += size;
	else
		r += di;
	if (size == 0)
		return (r);
	i = 0;
	while (src[i] != '\0' && di + 1 < size)
	{
		dest[di] = src[i];
		di++;
		i++;
	}
	dest[di] = '\0';
	return (r);
}
