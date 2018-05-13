/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:19:52 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/12 21:20:03 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	**move(int **str, int nb)
{
	int i;
	int k;

	i = 0;
	while (i < nb)
	{
		k = 0;
		while (k < 4)
		{
			if (str[i][0] > 0 && str[i][1] > 0 && str[i][2] > 0 && str[i][3] > 0)
			{
				str[i][0] = str[i][0] - 1;
				str[i][1] = str[i][1] - 1;
				str[i][2] = str[i][2] - 1;
				str[i][3] = str[i][3] - 1;
			}
			k++;
		}
		i++;
	}
	return (str);
}

int	**convert(char *str)
{
	int i;
	int j;
	int k;
	int l;
	int **pieces;

	i = 0;
	k = 0;
	pieces = (int**)malloc(sizeof(int*) * 26);
	while (str[i] != '\0')
	{
		pieces[k] = (int*)malloc(sizeof(int) * 4);
		j = 0;
		l = 0;
		while (j < 21 && str[i])
		{
			if (str[i] == '#')
			{
				pieces[k][l] = i % 5;
				l++;
			}
			j++;
			i++;
		}
		k++;
		g_piece_num = k;
	}
	return (move(pieces, k));
}
