/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstmv_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:48:11 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/18 03:59:27 by fgarzi-c         ###   ########.fr       */
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

int	fstmv_eq_crossed(int id_from, int id_to, t_stack *s)
{
	if (id_to + (s->len_from - id_from) < s->moves)
	{
		s->moves = id_to + (s->len_from - id_from);
		return (1);
	}
	return (0);
}

int	fstmv_eq(int id_from, int id_to, t_stack *s)
{
	if (id_from > id_to)
	{	
		if (id_from < s->moves)
		{	
			s->moves = id_from;
			return (1);
		}
	}
	else if (id_to < s->moves)
	{
		s->moves = id_to;
		return (1);
	}
	return (0);
}
