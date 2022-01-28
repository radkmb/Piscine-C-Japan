/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:37:11 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/25 11:37:13 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int ret;

	ret = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		++ret;
	}
	return (ret);
}
