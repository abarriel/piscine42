/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 17:23:31 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/09 17:33:34 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nga;
	int	numar;

	i = 0;
	nga = 0;
	numar = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n'))
		i++;
	if (str[i] == '-')
		nga = 1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		numar = numar * 10;
		numar = numar + (str[i] - '0');
		i++;
	}
	if (nga == 1)
		return (-numar);
	else
		return (numar);
}
