/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 02:55:00 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/25 01:13:30 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*last;
	t_list	*tmp;

	list = *begin_list;
	last = NULL;
	while (list)
	{
		tmp = list->next;
		list->next = last;
		last = list;
		list = tmp;
	}
	*begin_list = last;
}
