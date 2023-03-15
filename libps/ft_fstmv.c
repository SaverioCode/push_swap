/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstmv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:12:00 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/16 00:23:13 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// "s" means stack //
// "1" refers to the s where you take the num //
// "2" refers to the s where you put the num //

int	is_suitable_1(int *s1, int *s2, int len_s2, int i)
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

void	updt_fstmv(int i1, int i2, int *moves, int *i1_i2)
{
	int	flag;

	flag = 0;
	if (chk_fstmv_eq(i1, i2))
		flag = 1;
	if (fstmv_eq(i1, i2, *moves, flag))
	{
		i1_i2[0] = i1;
		i1_i2[1] = i2;
		*moves = (2 * i1) - i2;
	}
}

int	*ft_fstmv(t_stack *s)
{
	int	*i1_i2;
	int	moves;
	int	i;
	int	j;

	moves = 100000;
	i1_i2 = ft_malloc(2 * 4);
	i = -1;
	while (++i < s->len_a)
	{
		/// see how to make better the next 4 lines
		while (i < s->len_a && ft_islis(s, s->a[i]))
			i++;
		if (i >= s->len_a)
			break;
		if (is_lowest(s->a, s->len_a, i))
			updt_fstmv(i, find_lowest_id(s->b, s->len_b), &moves, i1_i2);
		else if (is_max(s->a, s->len_a, i))
			updt_fstmv(i, find_max_id(s->b, s->len_b), &moves, i1_i2);
		else
		{	
			if (is_suitable_1(s->a, s->b, s->len_b, i))
				updt_fstmv(i, 0, &moves, i1_i2);
	/// j1 parte da 2 poiche i primi due casi sono "speciali" e gestiti da due diverse funzioni ///
			j = 0;
	/// impongo di vedere solo fino a dieci posizioni nello stack b ///
			while (++j < s->len_b)
				if (is_suitable(s->a, s->b, i, j))
					updt_fstmv(i, j, &moves, i1_i2);
			/// think about creating special case for last element of b like the first two
		}
	}
	return (i1_i2); 
}
