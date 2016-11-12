/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 03:33:42 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/23 15:23:33 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list;
	t_list	*tmp;
	t_list	*tmp2;
	t_list	*follow;
	t_list	*previous;

	list = *begin_list;
	previous = *begin_list;
	if (!(list))
		list = NULL;
	while (list)
	{
		if ((*cmp)(list->data, list->next->data) > 0)
		{
			tmp = list;
			tmp2 = list->next;
			follow = tmp2->next;
			previous->next = tmp2;
			tmp2->next = tmp;
			tmp->next = follow;
			list = tmp2;
		}
		else
			list = list->next;
	}
}
