/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 19:56:08 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/14 22:37:37 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sqrt(int nb)
{
	int a;

	a = 1;
	if (nb < 0)
		return (0);
	while (a * a <= nb)
	{
		if (a * a == nb)
			return (a);
		a++;
	}
	return (a);
}

char	**board_size(int pieces)
{
	int		i;
	char	**board;

	i = 0;
	g_bs = ft_sqrt(pieces * 4);
	board = (char **)malloc(sizeof(char*) * (g_bs + 3));
	board[g_bs + 2] = NULL;
	while (i < g_bs + 2)
	{
		board[i] = (char *)malloc(sizeof(char) * (g_bs + 3));
		board[i][g_bs + 2] = '\0';
		i++;
	}
	return (blank_board(board, g_bs));
}
