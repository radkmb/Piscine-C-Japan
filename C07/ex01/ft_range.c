/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 20:05:05 by rfukuda           #+#    #+#             */
/*   Updated: 2022/01/16 01:16:29 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*strdup;

	if (min >= max)
		return (0);
	range = max - min - 1;
	if ((strdup = malloc(range * sizeof(int))) == NULL)
		return (0);
	i = 0;
	while (i <= range)
	{
		strdup[i] = min + i;
		i++;
	}
	return (strdup);
}

/*
int   main(void)
{
int* res;
int i;

res = ft_range(5, 10);

for (i = 0; i < 5; i++)
  printf("%d,", res[i]);
printf("\n");

res = ft_range(-20, -15);
for (i = 0; i < 5; i++)
  printf("%d,", res[i]);
printf("\n");


res = ft_range(10, 5);
printf("%x\n", (unsigned int)res);
}
*/
