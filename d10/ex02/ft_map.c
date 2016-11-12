/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 13:20:22 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/20 15:02:01 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *res;

	i = 0;
	res = (int*)malloc(sizeof(*res) * length);
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
