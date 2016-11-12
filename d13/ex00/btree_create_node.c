/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 01:55:00 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/25 00:49:50 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *tree;

	tree = (t_btree*)malloc(sizeof(t_btree));
	if (tree)
	{
		tree->item = item;
		tree->left = 0;
		tree->right = 0;
	}
	return (tree);
}
