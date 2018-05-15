/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 18:31:25 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/14 22:40:56 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**place(int *piece, char **board, int rowb, int colb)
{
	int i;

	i = 1;
	board[g_y][g_x] = g_pieces_placed + 65;
	while (i < 4)
	{
		if (piece[i] <= piece[i - 1])
		{
			colb++;
			rowb = piece[i] - piece[0];
			board[g_y + colb][g_x + rowb] = g_pieces_placed + 65;
		}
		if (piece[i] > piece[i - 1])
		{
			rowb++;
			board[g_y + colb][g_x + rowb] = g_pieces_placed + 65;
		}
		i++;
	}
	g_pieces_placed++;
	g_x = 0;
	g_y = 0;
	return (board);
}
