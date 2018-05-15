/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 14:15:43 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/14 17:02:56 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	board_check(int *piece, char **board, int rowb, int colb)
{
	int i;

	i = 0;
	while (++i < 4)
	{
		if (board[g_y][g_x] != '.')
			return (0);
		if (piece[i] <= piece[i - 1])
		{
			colb++;
			rowb = piece[i] - piece[0];
			if (board[g_y + colb][g_x + rowb] != '.')
				return (0);
		}
		if (piece[i] > piece[i - 1])
		{
			rowb++;
			if (board[g_y + colb][g_x + rowb] != '.')
				return (0);
		}
	}
	return (1);
}
