/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 07:41:17 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/06 09:01:42 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int a, int b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (4)
	{
		if (a < b)
		{
			ft_putnbr(a, b);
			if (a == 98 && b == 99)
				break ;
			ft_putchar(',');
			ft_putchar(' ');
		}
		b++;
		if (b > 99)
		{
			b = 0;
			a++;
		}
	}
}
