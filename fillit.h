/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 18:38:36 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/14 22:39:20 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		g_bs;
int		g_piece_num;
int		g_x;
int		g_y;
int		g_pieces_placed;

char	**board_size(int pieces);
int		**convert(char *str, int i, int k);
int		is_piece(char *str);
int		coordinates(int *piece, char **board);
int		solve(char *str);
char	**blank_board(char **board, int bs);
char	**boardsize(int pieces);
int		board_check(int *piece, char **board, int rowb, int colb);
int		dimensions(int *piece);
char	**grow_board(char **board);
char	**place(int *piece, char **board, int rowb, int colb);
char	**rm_piece(char **board);
int		ft_piece_counter(char *str);
int		ft_fieldcheck(char *str);
void	ft_putstr(char *str);
int		main(int argc, char **argv);

#endif
