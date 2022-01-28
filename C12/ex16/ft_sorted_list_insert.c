/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:23:11 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/25 19:23:12 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *prev;
	t_list *curr;

	if (!*begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	if (cmp((*begin_list)->data, data) > 0)
	{
		curr = *begin_list;
		*begin_list = ft_create_elem(data);
		(*begin_list)->next = curr;
		return ;
	}
	prev = *begin_list;
	curr = prev->next;
	while (curr && (cmp(curr->data, data) < 0))
	{
		prev = curr;
		curr = curr->next;
	}
	prev->next = ft_create_elem(data);
	prev->next->next = curr;
}
