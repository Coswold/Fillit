/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grow_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 19:56:41 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/12 21:20:48 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char **grow_board(char **board)
{
	int i;

	i = 0;
	g_bs++;
	board = blank_board(board, g_bs);
	g_pieces_placed = 0;
	return (board);
}
