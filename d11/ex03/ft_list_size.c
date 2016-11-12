/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 18:38:14 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/23 00:42:31 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		length;

	list = begin_list;
	length = 0;
	while (list)
	{
		length++;
		list = list->next;
	}
	return (length);
}
