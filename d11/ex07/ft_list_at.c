/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 23:15:16 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/23 02:35:47 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list				*list;
	unsigned int		i;

	list = begin_list;
	i = 0;
	while (i < nbr && list)
	{
		list = list->next;
		i++;
	}
	return (list);
}
