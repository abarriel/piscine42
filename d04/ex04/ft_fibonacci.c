/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 19:49:20 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/09 02:30:27 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 1 || index == 2)
		return (1);
	else if (index == 0 || index >= 47)
		return (0);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
