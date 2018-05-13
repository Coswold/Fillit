/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 20:56:19 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/12 22:57:31 by cooswold         ###   ########.fr       */
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
	count = 0;
	conn = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 21)
		{
			if (str[i] == '#' && str[i + 1] == '#')
				conn++;
			if (str[i - 5] == str[i] && str[i] == '#')
				conn++;
			if (str[i] == '#')
				count++;
			j++;
			i++;
		}
	}
	if (count == 4 && conn > 2)
		return (1);
	else
		return (0);
}


