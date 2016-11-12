/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 22:25:29 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/15 23:31:25 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*pc;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	pc = (char*)malloc(sizeof(char) * (len));
	while (src[i] != '\0')
	{
		pc[i] = src[i];
		i++;
	}
	pc[i] = '\0';
	return (pc);
}
argv[2][0] = cal[5]