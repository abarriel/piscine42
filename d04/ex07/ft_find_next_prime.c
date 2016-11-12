/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 03:55:06 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/09 16:50:24 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int n;

	n = nb - 1;
	if (nb <= 1)
		return (2);
	if (nb == 2)
		return (2);
	while (n >= 2)
	{
		if (nb % n == 0)
			return (ft_find_next_prime(nb + 1));
		else
			n--;
	}
	return (nb);
}
