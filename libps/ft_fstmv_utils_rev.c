/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstmv_utils_rev.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:55:49 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/18 07:49:35 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	fstmv_eq_crossed_rev(int id_from, int id_to, t_stack *s)
{
	if (id_from + (s->len_to - id_to) < s->moves)
	{
		s->moves = id_from + (s->len_to - id_to);
		return (1);
	}
	return (0);
}

void	set_len_from_and_len_to(int	len_from, int len_to, t_stack *s)
{
	s->len_from = len_from;
	s->len_to = len_to;
}

int	fstmv_eq_rev(int id_from, int id_to, t_stack *s)
{
	if (s->len_from - id_from > s->len_to - id_to)
	{	
		if (s->len_from - id_from < s->moves)
		{
			s->moves = s->len_from - id_from;
			return (1);
		}
	}
	else if (s->len_to - id_to < s->moves)
	{
		s->moves = s->len_to - id_to;
		return (1);
	}
	return (0);
}
