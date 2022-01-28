/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:22:40 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/25 19:22:41 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*begin;
	t_list	*end;
	void	*tmp;

	end = 0;
	while (begin_list != end)
	{
		begin = begin_list;
		while (begin->next != end)
		{
			tmp = begin->data;
			begin->data = begin->next->data;
			begin->next->data = tmp;
			begin = begin->next;
		}
		end = begin;
	}
}
