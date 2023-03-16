/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstmv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:12:00 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/16 23:30:13 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fstmv_start_end(t_stack *s, int i)
{
	int	j;

	if (is_lowest(s->b, s->len_b, s->a[i]))
		updt_fstmv(i, find_lowest_id(s->b, s->len_b), s, 1);
	else if (is_max(s->b, s->len_b, s->a[i]))
		updt_fstmv(i, find_max_id(s->b, s->len_b), s, 1);
	else
	{
		if (is_suitable_0(s->a, s->b, s->len_b, i))
			updt_fstmv(i, 0, s, 1);
		j = 0;
		while (++j < s->len_b)
			if (is_suitable(s->a, s->b, i, j))
				updt_fstmv(i, j, s, 1);
	}
}

void	fstmv_end_start(t_stack *s, int i)
{
	int	j;	

	if (is_lowest(s->b, s->len_b, s->a[i]))
		updt_fstmv(i, find_lowest_id(s->b, s->len_b), s, 0);
	else if (is_max(s->b, s->len_b, s->a[i]))
		updt_fstmv(i, find_max_id(s->b, s->len_b), s, 0);
	else
	{
		if (is_suitable_0_rev(s->a, s->b, s->len_b, i))
			updt_fstmv(i, s->len_b, s, 0);
		j = s->len_b - 1;
		while (--j > (s->len_b / 2) + 1 )
			if (is_suitable_rev(s->a, s->b, s->id_from, s->id_to))
				updt_fstmv(i, j, s, 0);
	}

}

void	updt_fstmv(int id_from, int id_to, t_stack *s, int flag)
{
	if (flag == 1)
	{
		if (fstmv_eq(id_from, id_to, s->moves))
		{
			s->id_from = id_from;
			s->id_to = id_to;
			s->moves = (2 * id_from) - id_to;
			s->rev_or_not = 0;
		}
	}
	else if (flag == 0)
	{
		if (fstmv_eq_rev(id_from, id_to, s))
		{
			s->id_from = id_from;
			s->id_to = id_to;
			s->moves = (2 * (s->len_from - id_from)) - (s->len_to - id_to);
			s->rev_or_not = 1;
		}
	}
}

void	ft_fstmv(t_stack *s)
{
	int	i;

	i = -1;
	while (++i < (s->len_a / 2) + 1)
	{
		while (i < s->len_a && ft_islis(s, s->a[i]))
			i++;
		if (i >= s->len_a)
			break ;
		fstmv_start_end(s, i);
	}
	i = (s->len_a / 2) + 1;
	set_len_from_and_len_to(s->len_a, s->len_b, s);
	while (--i >= 0)
	{
		while (i >= 0 && ft_islis(s, s->a[i]))
			i++;
		if (i >= 0)
			break;
		fstmv_end_start(s, i);
	}
}
