/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugibone <lugibone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:03:39 by lugibone          #+#    #+#             */
/*   Updated: 2019/04/01 16:49:32 by lugibone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int		ft_str_read(char *str)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = BUF_SIZE;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (1);
	while (ret)
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putchar(buf[0]);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	if (argc == 2)
		ft_str_read(argv[1]);
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	return (0);
}
