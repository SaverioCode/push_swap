/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 01:15:48 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/18 09:26:46 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_make_moves_to_the_left(t_stack *s, void r_from(), void r_to())
{
	while (s->id_from > 0 && s->id_to > 0)
	{
		ft_rr(s);
		s->id_from--;
		s->id_to--;
	}
	while (s->id_from > 0)
	{
		r_from(s, 1);
		s->id_from--;
	}
	while (s->id_to > 0)
	{
		r_to(s, 1);
		s->id_to--;
	}
}

void	ft_make_moves_to_the_right(t_stack *s, void rr_from(), void rr_to())
{
	while (s->id_from < s->len_from && s->id_to < s->len_to)
	{
		ft_rrr(s);
		s->id_from++;
		s->id_to++;
	}
	while (s->id_from < s->len_from)
	{
		rr_from(s, 1);
		s->id_from++;
	}
	while (s->id_to < s->len_to)
	{
		rr_to(s, 1);
		s->id_to++;
	}
}

void	ft_make_moves_crossed(t_stack *s, void rr_from(), void r_to())
{
	while (s->id_from < s->len_from)
	{
		rr_from(s, 1);
		s->id_from++;
	}
	while (s->id_to > 0)
	{
		r_to(s, 1);
		s->id_to--;
	}
}

void	ft_make_moves_crossed_rev(t_stack *s, void r_from(), void rr_to())
{
	while (s->id_from > 0)
	{
		r_from(s, 1);
		s->id_from--;
	}
	while (s->id_to < s->len_to)
	{
		rr_to(s, 1);
		s->id_to++;
	}
}

void	ft_make_moves(t_stack *s)
{
	if (s->rev_or_not == 1)
		ft_make_moves_to_the_left(s, ft_rb, ft_ra);
	else if (s->rev_or_not == 0)
		ft_make_moves_to_the_right(s, ft_rrb, ft_rra);
	else if (s->rev_or_not == 3)
		ft_make_moves_crossed(s, ft_rrb, ft_ra);
	else if (s->rev_or_not == 2)
		ft_make_moves_crossed_rev(s, ft_rb, ft_rra);
}
