/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 01:33:16 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/25 03:23:27 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root->left != 0)
			btree_apply_infix(root->left, (*applyf));
		(*applyf)(root->item);
		if (root->right != 0)
			btree_apply_infix(root->right, (*applyf));
	}
}
