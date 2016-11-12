/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 19:20:31 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/25 01:58:33 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		(*applyf)(root->item);
		if (root->left != 0)
			btree_apply_prefix(root->left, (*applyf));
		if (root->right != 0)
			btree_apply_prefix(root->right, (*applyf));
	}
}
