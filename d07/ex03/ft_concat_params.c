/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 04:22:23 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/17 11:36:06 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		dest[len++] = src[i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int		count_letters(char *argv)
{
	int		cpt;

	cpt = 0;
	while (argv[cpt])
	{
		cpt++;
	}
	return (cpt + 1);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	i = 1;
	while (i < argc)
	{
		j += count_letters(argv[i]);
		i++;
	}
	str = (char*)malloc(sizeof(str) * j);
	i = 1;
	while (i < argc)
	{
		if (i == 1)
			ft_strcpy(str, argv[i]);
		else if (i < argc)
			ft_strcat(str, argv[i]);
		if (i + 1 != argc)
			ft_strcat(str, "\n");
		i++;
	}
	return (str);
}
