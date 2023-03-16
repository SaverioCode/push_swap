/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstmv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:12:00 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/16 01:26:37 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// "s" means stack //
// "1" refers to the s where you take the num //
// "2" refers to the s where you put the num //

int	is_suitable_0(int *s1, int *s2, int len_s2, int i)
{
	if (s1[i] < s2[0] && s1[i] > s2[len_s2 - 1])
		return (1);
	return (0);
}

int	is_suitable(int *s1, int *s2, int i1, int i2)
{
	if (s1[i1] < s2[i2] && s1[i1] > s2[i2 - 1])
		return (1);
	return (0);
}

int	chk_fstmv_eq(int i1, int i2)
{
	if ((2 * i1) > i2)
		return (1);
	return (0);
}

int	fstmv_eq(int i1, int i2, int moves, int flag)
{
	if (flag == 1)
	{	
		if ((2 * i1) - i2 < moves)
			return (1);
	}
	else if (flag == 0)
	{
		if (i2 - (2 * i1) < moves)
			return (1);
	}
	return (0);
}

void	updt_fstmv(int i1, int i2, t_stack *s)
{
	int	flag;

	flag = 0;
	if (chk_fstmv_eq(i1, i2))
		flag = 1;
	if (fstmv_eq(i1, i2, s->moves, flag))
	{
		s->id_from = i1;
		s->id_to = i2;
		s->moves = (2 * i1) - i2;
	}
}

int	lowest_or_max(t_stack *s, int i)
{
	if (is_lowest(s->b, s->len_b, s->a[i]))
		updt_fstmv(i, find_lowest_id(s->b, s->len_b), s);
	else if (is_max(s->b, s->len_b, s->a[i]))
		updt_fstmv(i, find_max_id(s->b, s->len_b), s);
	else
		return (0);
	return (1);
}

void	ft_fstmv(t_stack *s)
{
	int	i;
	int	j;

	i = -1;
	while (++i < s->len_a)
	{
		while (i < s->len_a && ft_islis(s, s->a[i]))
			i++;
		if (i >= s->len_a)
			break;
		if (!(lowest_or_max))
		{
			if (is_suitable_0(s->a, s->b, s->len_b, i))
				updt_fstmv(i, 0, s);
			j = 0;
			while (++j < s->len_b)
				if (is_suitable(s->a, s->b, i, j))
					updt_fstmv(i, j, s);
		}
	}
}
