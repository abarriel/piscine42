/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 17:59:54 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/22 23:00:16 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct	s_cal
{
	char		op;
	int			(*f)(int a, int b);

}				t_cal;
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_putnbr(int n);
int				ft_atoi(char *str);
int				ft_mul(int f, int s);
int				ft_add(int f, int s);
int				ft_sub(int f, int s);
int				ft_div(int f, int s);
int				ft_mod(int f, int s);
char			ft_strcmp(char *s1, char *s2);

#endif
