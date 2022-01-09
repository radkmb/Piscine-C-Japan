/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:32:19 by rfukuda           #+#    #+#             */
/*   Updated: 2022/01/09 03:24:19 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a' && str[i] <= 'z') ||
					(str[i] >= 'A' && str[i] <= 'Z')) &&
				(str[i - 1] < '0' ||
				(str[i - 1] > '9' && str[i - 1] < 'A') ||
				(str[i - 1] > 'Z' && str[i - 1] < 'a') ||
				str[i - 1] > 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}
	return (str);
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
	char	r[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n"};

    ft_putstr(ft_strcapitalize(r));
	return (0);
}
*/
