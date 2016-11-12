/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 05:32:18 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/15 17:11:53 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *big, char *little)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (little[len] != '\0')
		len++;
	if (len == 0)
		return (big);
	while (big[i] != '\0')
	{
		while (little[j] == big[i + j])
		{
			if (j == len - 1)
				return (big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
