/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 18:45:12 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/12 16:48:01 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_inf(hour)
{
	f1 = 'A';
	s = hour+1;
	s2 = 'A';
}
void	ft_takes_place(int hour)
{
	int f;
	char f1;
	int s;
	char s2;

	f=hour;
	if ( hour < 12 )
	ft_inf(hour);
if(hour == 11)
{
	f1 = 'A';
	s = hour+1;
	s2 = 'P';
}
if (hour == 24 || hour == 0)
{
	f = 12;
	f1= 'A';
	s= 1;
	s2= 'A';
}
if( hour == 12)
{
	f = 12;
	f1 = 'P';
	s= 1;
	s2 = 'A';
}
if(hour > 12 && hour < 23)
{
	f -= 12;
	s = f+1;
	s2 = 'P';
	f1= 'P';
}
if (hour == 23)
{
	f =  11;
	s = 12;
	s2 = 'A';
	f1 = 'P';
}
