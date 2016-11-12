/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 18:13:36 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/24 17:41:25 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_usage(void)
{
	write(2, "tail: option requires an argument -- c\n", 39);
	write(2, "usage: tail [-F | -f | -r] [-q] [-b # | -c # | -n #]", 52);
	write(2, " [file ...]\n", 12);
	return (0);
}

void	ft_mamen(void)
{
	char	buffer;

	while (read(0, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

void	ft_missing(char **argv)
{
	write(2, "tail: illegal offset -- ", 25);
	ft_putstr(*argv);
	write(2, "\n", 1);
}
