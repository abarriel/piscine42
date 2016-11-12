/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 20:45:53 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/23 02:30:50 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list;
	t_list	*new;

	list = *begin_list;
	while (list)
	{
		new = list->next;
		free(list);
		list = new;
	}
	*begin_list = NULL;
}
