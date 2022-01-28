/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:47:59 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/25 17:48:01 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *ele;
	t_list *ptr;

	ele = ft_create_elem(data);
	if (!*begin_list)
	{
		*begin_list = ele;
		return ;
	}
	ptr = *begin_list;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = ele;
}
