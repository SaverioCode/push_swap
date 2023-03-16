/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstmv_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:48:11 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/16 22:30:02 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_suitable_0(int *s_from, int *s_to, int len_s2, int i)
{
	if (s_from[i] < s_to[0] && s_from[i] > s_to[len_s2 - 1])
		return (1);
	return (0);
}

int	is_suitable(int *s_from, int *s_to, int id_from, int id_to)
{
	if (s_from[id_from] < s_to[id_to] && s_from[id_from] > s_to[id_to - 1])
		return (1);
	return (0);
}

int	chk_fstmv_eq(int id_from, int id_to)
{
	if ((2 * id_from) > id_to)
		return (1);
	return (0);
}

int	fstmv_eq(int id_from, int id_to, int moves)
{
	if (chk_fstmv_eq(id_from, id_to))
	{	
		if ((2 * id_from) - id_to < moves)
			return (1);
	}
	else if (id_to - (2 * id_from) < moves)
		return (1);
	return (0);
}
