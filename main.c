/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 20:51:23 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/15 13:33:31 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int g_bs = 0;
int g_piece_num = 0;
int g_x = 0;
int g_y = 0;
int g_pieces_placed = 0;

static char		*ft_strread(char *s1, int count, int fd, int ret)
{
	int		i;
	char	buf[2];
	char	*str;

	i = 0;
	str = (char*)malloc(sizeof(char) * count);
	fd = open(s1, O_RDONLY);
	if (fd == -1)
		ft_putstr("open() failed\n");
	while ((ret = read(fd, buf, 1)))
	{
		buf[ret] = '\0';
		str[i] = buf[0];
		i++;
	}
	str[i] = '\0';
	if (close(fd) == -1)
		ft_putstr("close() failed\n");
	return (str);
}

static int		ft_getfilelength(char *s1)
{
	int		fd;
	int		ret;
	char	buf[2];
	int		count;

	count = 0;
	fd = open(s1, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}
	while ((ret = read(fd, buf, 1)))
	{
		buf[ret] = '\0';
		count++;
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (1);
	}
	return (count);
}

int				main(int argc, char **argv)
{
	char	*str;
	int		count;

	if (argc == 2)
	{
		count = ft_getfilelength(argv[1]);
		str = ft_strread(argv[1], count, 1, 1);
		if (solve(str) == 0)
			ft_putstr("error\n");
	}
	return (0);
}
