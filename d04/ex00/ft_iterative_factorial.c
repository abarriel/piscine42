/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 00:26:00 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/09 02:27:29 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int c;
	int f;

	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	else
		c = 0;
	f = nb;
	while (++c < nb)
		f = f * (nb - c);
	return (f);
}
