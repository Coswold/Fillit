/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dimensions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 20:13:32 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/12 21:20:28 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		width(int *piece)
{
	int i;
	int width;

	i = 0;
	width = piece[i];
	while (i < 3)
	{
		if (piece[i] < piece[i + 1])
			width = piece[i + 1];
		i++;
	}
	return (width);
}

int		height(int *piece)
{
	int i;
	int height;

	i = 0;
	height = 0;
	while (i < 3)
	{
		if (piece[i] == piece[i + 1])
			height++;
		i++;
	}
	return (height);
}

int		dimensions(int *piece)
{
	if ((piece[0] > 0 && g_x == 0) || (piece[0] == 2 && g_x == 1))
		return (0);
	if (width(piece) > (g_bs - g_x))
		return (0);
	if (height(piece) > (g_bs - g_y))
		return (0);
	return (1);
}
