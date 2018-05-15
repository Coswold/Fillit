/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece_counter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 19:39:12 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/14 19:58:45 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_piece_counter(char *str)
{
	int i;
	int piece_count;

	i = 0;
	piece_count = 0;
	while (str[i] != '\0')
	{
		if (i % 21 == 0)
			piece_count++;
		i++;
	}
	i = i - 1;
	return (piece_count);
}
