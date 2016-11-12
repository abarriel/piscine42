/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 17:50:58 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/22 22:53:28 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_do_op(int a, char op, int b)
{
	int		i;
	t_cal	cal[5];

	cal[0].op = '+';
	cal[0].f = ft_add;
	cal[1].op = '-';
	cal[1].f = ft_sub;
	cal[2].op = '*';
	cal[2].f = ft_mul;
	cal[3].op = '/';
	cal[3].f = ft_div;
	cal[4].op = '%';
	cal[4].f = ft_mod;
	i = 0;
	while (i < 5)
	{
		if (op == cal[i].op)
			return (cal[i].f(a, b));
		i++;
	}
	if (i == 5)
		ft_putstr("0");
	return (0);
}

int		compt(char *str)
{
	int i;

	i = 0;
	if (str[i + 1] == '\0')
		return (1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int f;
	int s;

	if (argc == 4)
	{
		f = ft_atoi(argv[1]);
		s = ft_atoi(argv[3]);
		if (compt(argv[2]) != 1)
		{
			ft_putstr("0");
			ft_putchar('\n');
			return (0);
		}
		ft_do_op(f, argv[2][0], s);
		ft_putchar('\n');
	}
	return (0);
}
