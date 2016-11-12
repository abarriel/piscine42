/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:05:58 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/12 16:33:20 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	while (base != 1)
	{
		if (base % 2 == 0)
			return (ft_collatz_conjecture(base / 2));
		else
			return (ft_collatz_conjecture((3 * base) + 1));
	}
	return (0);
}
