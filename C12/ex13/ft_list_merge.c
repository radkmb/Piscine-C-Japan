/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:21:58 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/25 19:22:00 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *ptr;

	ptr = *begin_list1;
	if (!ptr)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = begin_list2;
}
