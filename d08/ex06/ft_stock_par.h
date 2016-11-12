/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 19:54:31 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/18 21:13:29 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>
# include <unistd.h>

void					ft_putchar(char c);
char					**ft_split_whitespaces(char *str);
struct s_stock_par		*ft_param_to_tab(int ac, char **av);
void					ft_show_tab(struct s_stock_par *par);
typedef	struct			s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}						t_stock_par;
#endif
