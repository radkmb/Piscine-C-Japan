/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 20:43:45 by rfukuda           #+#    #+#             */
/*   Updated: 2022/01/16 01:17:05 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*strdup;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min - 1;
	if ((strdup = malloc(size * sizeof(int))) == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = strdup;
	i = 0;
	while (i <= size)
	{
		strdup[i] = min + i;
		i++;
	}
	return (size + 1);
}

/*
int   main(void)
{
  int* res = NULL;
  int i;
  int size;
  
  size = ft_ultimate_range(&res, 5, 10);
  printf("is_null? %d\n", res == NULL);
  for (i = 0; i < 5; i++)
          printf("%d,", res[i]);
  printf("\n");
  
  res = NULL;
  size = ft_ultimate_range(&res, -20, -17);
  printf("is_null? %d\n", res == NULL);
  for (i = 0; i < 3; i++)
          printf("%d,", res[i]);
  printf("\n");
  
  res = (int*)1;
  size = ft_ultimate_range(&res, 10, 5);
  printf("is_null? %d\n", res == NULL);

  return (0);
}
*/
