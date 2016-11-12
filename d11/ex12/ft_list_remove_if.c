/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 18:19:00 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/23 15:23:55 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list;
	t_list	*fre;

	list = *begin_list;
	if (!(list))
		list = NULL;
	while (list)
	{
		if ((*cmp)(list->data, data_ref) == 0)
		{
			fre = list;
			free(fre);
			list = list->next;
		}
		else
			list = list->next;
	}
}
