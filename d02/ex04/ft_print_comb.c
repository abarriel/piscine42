/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 22:46:24 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/05 16:56:56 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_ielse(int c, int d, int u)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(u);
	if (c < '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = '0';
	d = '1';
	u = '2';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_ielse(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
