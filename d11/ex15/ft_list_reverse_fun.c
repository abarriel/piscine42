/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 11:55:06 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/23 15:26:14 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list **begin_list)
{
	t_list	*list;
	t_list	*last;
	t_list	*tmp;

	list = *begin_list;
	last = NULL;
	if (!(list))
		list = NULL;
	while (list)
	{
		tmp = list->next;
		list->next = last;
		last = list;
		list = tmp;
	}
	*begin_list = last;
}
