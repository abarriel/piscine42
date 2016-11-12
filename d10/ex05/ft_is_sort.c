/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 14:02:54 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/22 23:00:38 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		countup;
	int		countdown;
	int		even;

	i = 0;
	countup = 0;
	countdown = 0;
	even = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			countup++;
		else if (f(tab[i], tab[i + 1]) < 0)
			countdown++;
		else if (f(tab[i], tab[i + 1]) == 0)
			even++;
		i++;
	}
	if ((even + countup) == i || (even + countdown) == i)
		return (1);
	return (0);
}
