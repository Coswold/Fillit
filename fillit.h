/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 18:38:36 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/12 23:17:28 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>

int		g_bs;
int		g_piece_num;
int		g_x;
int		g_y;
int		g_pieces_placed;

char	**board_size(int pieces);
int		**convert(char *str);
int		is_piece(char *str);
int		coordinates(int *piece, char **board);
int		solve(char *str);
char	**blank_board(char **board, int bs);
char	**boardsize(int pieces);
int		board_check(int *piece, char **board);
int		dimensions(int *piece);
char	**grow_board(char **board);
char	**place(int *piece, char **board);
char	**rm_piece(char **board);
int		main(void);

#endif
