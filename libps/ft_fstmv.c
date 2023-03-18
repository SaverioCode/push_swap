/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstmv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:12:00 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/18 10:12:50 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fstmv_start_end(t_stack *s, int i)
{
	int	j;

	if (is_lowest(s->a, s->len_a, s->b[i]))
	{	
		updt_fstmv(i, find_lowest_id(s->a, s->len_a), s, 1);
		updt_fstmv_crossed(i, find_lowest_id(s->a, s->len_a), s, 2);
	}
	else if (is_max(s->a, s->len_a, s->b[i]))
	{	
		updt_fstmv(i, find_max_id(s->a, s->len_a), s, 1);
		updt_fstmv_crossed(i, find_max_id(s->a, s->len_a), s, 2);
	}
	else
	{
		if (is_suitable_0(s->b, s->a, s->len_a, i))
			updt_fstmv(i, 0, s, 1);
		j = 0;
		while (++j < s->len_a)
			if (is_suitable(s->b, s->a, i, j))
				updt_fstmv(i, j, s, 1);
		j = s->len_a;
		while (--j > 0)
			if (is_suitable(s->b, s->a, i, j))
				updt_fstmv_crossed(i, j, s, 2);
	}
}

void	fstmv_end_start(t_stack *s, int i)
{
	int	j;

	if (is_lowest(s->a, s->len_a, s->b[i]))
	{	
		updt_fstmv(i, find_lowest_id(s->a, s->len_a), s, 0);
		updt_fstmv_crossed(i, find_lowest_id(s->a, s->len_a), s, 3);
	}
	else if (is_max(s->a, s->len_a, s->b[i]))
	{	
		updt_fstmv(i, find_max_id(s->a, s->len_a), s, 0);
		updt_fstmv_crossed(i, find_max_id(s->a, s->len_a), s, 3);
	}
	else
	{
		j = s->len_a;
		while (--j > 0)
			if (is_suitable(s->b, s->a, i, j))
				updt_fstmv(i, j, s, 0);
		if (is_suitable_0(s->b, s->a, s->len_a, i))
			updt_fstmv_crossed(i, 0, s, 3);
		j = 0;
		while (++j < s->len_a)
			if (is_suitable(s->b, s->a, i, j))
				updt_fstmv_crossed(i, j, s, 3);
	}

}

void	updt_fstmv_crossed(int id_from, int id_to, t_stack *s, int flag)
{
	if (flag == 3)
	{
		if (fstmv_eq_crossed(id_from, id_to, s))
		{
			s->id_from = id_from;
			s->id_to = id_to;
			s->rev_or_not = 3;
		}
	}
	else if (flag == 2)
	{
		if (fstmv_eq_crossed_rev(id_from, id_to, s))
		{
			s->id_from = id_from;
			s->id_to = id_to;
			s->rev_or_not = 2;
		}
	}
}

void	updt_fstmv(int id_from, int id_to, t_stack *s, int flag)
{
	if (flag == 1)
	{
		if (fstmv_eq(id_from, id_to, s))
		{
			s->id_from = id_from;
			s->id_to = id_to;
			s->rev_or_not = 1;
		}
	}
	else if (flag == 0)
	{
		if (fstmv_eq_rev(id_from, id_to, s))
		{
			s->id_from = id_from;
			s->id_to = id_to;
			s->rev_or_not = 0;
		}
	}
}

void	ft_fstmv(t_stack *s)
{
	int	i;

	i = -1;
	s->moves = 1000;
	set_len_from_and_len_to(s->len_b, s->len_a, s);
	while (++i < s->len_b)
		fstmv_start_end(s, i);
	i = s->len_b;
	while (--i >= 0)
		fstmv_end_start(s, i);
}
