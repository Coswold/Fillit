/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 19:34:01 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/14 22:45:31 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_fieldcheck(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i % 21;
		if (j == 20)
		{
			if ((j == 20) && (str[i] != '\n'))
				return (1);
		}
		else
		{
			if ((j % 5 == 4) && (str[i] != '\n'))
				return (1);
			if ((j % 5 < 4) && (str[i] != '.' && str[i] != '#'))
				return (1);
		}
		i++;
	}
	if ((i % 21 != 20) && (i % 21 != 0))
		return (1);
	return (0);
}