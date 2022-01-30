/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 02:34:57 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/27 02:35:01 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *ret;

	ret = (t_btree*)malloc(sizeof(t_btree));
	ret->item = item;
	ret->left = 0;
	ret->right = 0;
	return (ret);
}
