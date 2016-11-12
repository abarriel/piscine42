/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 01:58:07 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/25 03:23:41 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root->left != 0)
			btree_apply_suffix(root->left, (*applyf));
		if (root->right != 0)
			btree_apply_suffix(root->right, (*applyf));
		(*applyf)(root->item);
	}
}
