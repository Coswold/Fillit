/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 18:31:25 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/12 22:00:20 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**place(int	*piece, char **board)
{
	int i;
	int rowb;
	int colb;

	i = 0;
	rowb = 0;
	colb = 0;
	board[g_y][g_x] = g_pieces_placed + 65;
	while (i < 3)
	{
		if (piece[i] >= piece[i + 1])
		{
			colb++;
			rowb = 0;
			board[g_y + colb][g_x] = g_pieces_placed + 65;
		}
		if (piece[i] < piece[i + 1])
		{
			rowb++;
			board[g_y][g_x + rowb] = g_pieces_placed + 65;
		}
		i++;
	}
	g_pieces_placed++;
	g_x = 0;
	g_y = 0;
	return (board);
}
