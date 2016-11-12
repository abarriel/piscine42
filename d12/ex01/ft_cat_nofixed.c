/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 12:21:28 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/24 20:19:07 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define BUF_SIZE 29000

void	ft_mamen(void)
{
	char	buffer;

	while (read(0, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int		main(int argc, char **argv)
{
	int		ret;
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		i;

	i = 1;
	if (argc < 2 || argv[1][0] == '-')
		ft_mamen();
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		ret = read(fd, buf, BUF_SIZE);
		if (fd >= 0)
			ft_putstr(buf);
		else
		{
			ft_putstrr("cat: ");
			ft_putstrr(argv[i]);
			ft_putstrr(": No such file or directory\n");
		}
		close(fd);
		i++;
	}
}
