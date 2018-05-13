/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 14:15:43 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/12 21:18:16 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	board_check(int *piece, char **board)
{
	int i;
	int rowb;
	int colb;

	i = 1;
	rowb = 0;
	colb = 0;
	while (i < 3)
	{
		if (board[g_y][g_x] != '.')
			return (0);
		if (piece[i] >= piece[i + 1])
		{
			colb++;
			rowb = 0;
			if (board[g_y + colb][g_x] != '.')
				return (0);
		}
		if (piece[i] < piece[i + 1])
		{
			rowb++;
			if (board[g_y][g_x + rowb] != '.')
				return (0);
		}
		i++;
	}
	return (1);
}
