/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 18:11:39 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/13 14:15:29 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "fillit.h"

int		coordinates(int *piece, char **board)
{
	while (g_y < g_bs)
	{
		while (g_x < g_bs)
		{	
			if (dimensions(piece) == 1 && board_check(piece, board) == 1)
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
		j = 0;
		while (j < g_bs)
		{
			ft_putchar(board[i][j]);
			j++;
		}
		i++;
	}
}

int		solve(char *str)
{
	int		**pieces;
	char	**board;
	write(1, "before board size", 17);
	board = board_size(g_piece_num);
	if (is_piece(str) == 0)
	{
		write(1, "is not piece", 12);
		return (0);
	}
	else
	{
		write(1, "pieces", 6);
		pieces = convert(str);
	}
	while (g_pieces_placed < g_piece_num)
	{
		write(1, "\nbegin while\n", 13);
		if (coordinates(pieces[g_pieces_placed], board) == 1)
		{
			write(1, "1st if\n", 7);
			board = place(pieces[g_pieces_placed], board);
		}
		else
		{
			write(1, "else", 5);
			board = rm_piece(board);
		}
		if (g_pieces_placed < 0)
		{
			write(1, "\n2nd if", 7);
			board = grow_board(board);
		}
	}
	write(1, "\nprint\n", 7);
	print_board(board);
	return (1);
}
