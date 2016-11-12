/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 19:43:22 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/17 17:09:27 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ftable(char *str)
{
	int		cpt;
	int		p;

	p = 0;
	cpt = 0;
	while (str[p] != '\0')
	{
		while (str[p] == ' ' || str[p] == '\n' || str[p] == '\t')
			p++;
		if (str[p] != '\0')
			cpt++;
		while (str[p] != '\0' &&
				(!(str[p] == ' ' || str[p] == '\n' || str[p] == '\t')))
			p++;
	}
	return (cpt);
}

int		conletter(char *str)
{
	int		p;

	p = 0;
	while (str[p] != '\0'
			&& (!(str[p] == ' ' || str[p] == '\n' || str[p] == '\t')))
	{
		p++;
	}
	return (p);
}

int		ccpy(char *dest, char *str)
{
	int		i;

	i = 0;
	while (*str && (!(*str == ' ' || *str == '\n' || *str == '\t')))
	{
		*dest = *str;
		i++;
		dest++;
		str++;
	}
	*dest = '\0';
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		sp;

	sp = 0;
	if (!(tab = (char**)malloc(sizeof(*tab) * (ftable(str) + 1))))
		return (NULL);
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
		str++;
	while (*str)
	{
		if (!(tab[sp] = (char*)malloc(sizeof(**tab) * (conletter(str) + 1))))
			return (NULL);
		str += ccpy(tab[sp], str);
		sp++;
		while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
			str++;
	}
	tab[sp] = 0;
	return (tab);
}
