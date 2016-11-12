/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 03:54:30 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/13 04:13:34 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_display(char *str)
{
	int i;

	i=0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
int main(int argc, char **argv)
{
  int i;

	i = argc-1;
  while (i > 0)
  {
  ft_display(argv[i]);
	ft_putchar('\n');
  i--;
  }
	return (0);
}
