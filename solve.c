/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 18:11:39 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/15 15:24:32 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		coordinates(int *piece, char **board)
{
	while (g_y < g_bs)
	{
		while (g_x < g_bs)
		{
			if (dimensions(piece) == 1 && board_check(piece, board, 0, 0) == 1)
				return (1);
			else
				g_x++;
		}
		if (g_x == g_bs)
		{
			g_x = 0;
			g_y++;
		}
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_board(char **board)
{
	int i;
	int j;

	i = 0;
	while (i < g_bs)
	{
		if (j == g_bs)
			ft_putchar('\n');
		j = 0;
		while (j < g_bs)
		{
			ft_putchar(board[i][j]);
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}

int		solve(char *str)
{
	int		**pieces;
	char	**board;

	if (ft_fieldcheck(str) == 1)
		return (0);
	if (is_piece(str) == 0)
		return (0);
	g_piece_num = ft_piece_counter(str);
	board = board_size(g_piece_num);
	pieces = convert(str, 0, 0);
	while (g_pieces_placed < g_piece_num)
	{
		if (coordinates(pieces[g_pieces_placed], board) == 1)
			board = place(pieces[g_pieces_placed], board, 0, 0);
		else
			board = rm_piece(board);
		if (g_pieces_placed < 0)
			board = grow_board(board);
	}
	print_board(board);
	return (1);
}
