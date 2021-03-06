/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 02:31:22 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/09 17:14:13 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int factor;

	factor = 0;
	if (nb <= 0)
		return (0);
	if (nb == 2147483647)
		return (0);
	while (factor * factor < nb)
	{
		factor++;
	}
	if (factor * factor == nb)
		return (factor);
	else
		return (0);
}
