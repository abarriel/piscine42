/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 03:23:02 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/23 15:24:30 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list		*list;
	t_list		*list2;

	list = *begin_list1;
	list2 = begin_list2;
	if (list->next)
		list->next = NULL;
	while (list->next)
		list = list->next;
	list->next = list2;
}
