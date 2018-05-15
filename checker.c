/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 20:56:19 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/14 22:30:18 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	is_piece(char *str)
{
	int conn;
	int count;
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		conn = 0;
		count = 0;
		j = 0;
		while (j++ < 21 && str[i])
		{
			if (str[i] == '#' && str[i + 1] == '#')
				conn++;
			if (str[i - 5] == str[i] && str[i] == '#')
				conn++;
			if (str[i] == '#')
				count++;
			i++;
		}
		if (conn < 3 || count != 4)
			return (0);
	}
	return (1);
}
