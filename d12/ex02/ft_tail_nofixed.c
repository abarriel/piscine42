/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <abarriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 01:06:21 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/24 20:34:08 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define BUF_SIZE 4096

int		ft_error(int argc, char **argv)
{
	int		i;

	i = 3;
	if (argc == 1)
		ft_mamen();
	if (argv[1][0] == '-' && argv[1][1] == 'c')
	{
		if (argc <= 2)
			return (ft_usage());
	}
	return (0);
}

void	ft_display(char **argv)
{
	ft_putstr("==> ");
	ft_putstr(*argv);
	ft_putstr(" <==\n");
}

int		main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	i = 2;
	ft_error(argc, argv);
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		ret = read(fd, buf, BUF_SIZE);
		if (fd >= 0 && argc <= 3)
			ft_putstr(buf);
		else if (fd >= 0 && argc > 3)
		{
			ft_display(argv);
			ft_putstr(buf);
		}
		else
			ft_missing(&argv[i]);
		close(fd);
		i++;
	}
	return (0);
}
