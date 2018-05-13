/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 19:27:58 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/12 22:00:43 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char **rm_piece(char **board)
{
	int i;
	int j;

	i = 0;
	g_pieces_placed--;
	while (i < g_bs)
	{
		j = 0;
		while (j < g_bs)
		{
			if (board[i][j] == g_pieces_placed + 65)
				board[i][j] = '.';
			j++;
		}
		i++;
	}
	if (g_x == g_bs)
	{
		g_x = 0;
		g_y++;
	}
	else
		g_x++;
	return (board);
}
