/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:49:35 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/25 17:49:37 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp;
	t_list *prev;
	t_list *curr;

	if (!*begin_list || !(*begin_list)->next)
		return ;
	prev = *begin_list;
	curr = prev->next;
	prev->next = 0;
	while (curr->next)
	{
		tmp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = tmp;
	}
	curr->next = prev;
	*begin_list = curr;
}
