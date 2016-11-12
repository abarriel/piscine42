/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 20:25:28 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/18 21:04:03 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int							ft_strlen(char *src)
{
	int				len;

	len = 0;
	while (src[len] != '\0')
		len++;
	return (len);
}

char						*ft_strdup(char *src)
{
	int				i;
	char			*str;

	i = 0;
	str = (char*)malloc(sizeof(*str) * ft_strlen(src));
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct		s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*ele;
	int				i;

	ele = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		ele[i].size_param = ft_strlen(av[i]);
		ele[i].str = av[i];
		ele[i].copy = ft_strdup(av[i]);
		ele[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	ele[i].str = 0;
	return (ele);
}
