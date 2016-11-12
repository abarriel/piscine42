/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 23:43:06 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/21 14:56:11 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_add(int f, int s)
{
	return (ft_putnbr(f + s));
}

int		ft_sub(int f, int s)
{
	return (ft_putnbr(f - s));
}

int		ft_mul(int f, int s)
{
	return (ft_putnbr(f * s));
}

int		ft_div(int f, int s)
{
	if (s == 0)
		ft_putstr("Stop : division by zero");
	else
		return (ft_putnbr(f / s));
	return (0);
}

int		ft_mod(int f, int s)
{
	if (s == 0)
		ft_putstr("Stop : modulo by zero");
	else
		return (ft_putnbr(f % s));
	return (0);
}
