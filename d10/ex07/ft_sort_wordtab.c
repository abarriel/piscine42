/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 02:35:32 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/22 21:34:39 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ascii(char **tab, int len)
{
	int		i;
	int		j;
	char	*swap;

	i = 0;
	while (i < (len - 1))
	{
		j = 0;
		while (tab[i][j] == tab[i + 1][j])
			j++;
		if (tab[i][j] > tab[i + 1][j])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = -1;
		}
		i++;
	}
}

void	ft_sort_wordtab(char **tab)
{
	int len;

	len = 0;
	while (tab[len] != '\0')
		len++;
	ft_ascii(tab, len);
}
