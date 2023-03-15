/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstmv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:12:00 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/15 03:09:12 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// "s" means stack //
// "1" refers to the s where you take the num //
// "2" refers to the s where you put the num //

int	is_suitable_1(int *s1, int *s2, int len_s2, int i)
{
	if (s1[i] < s2[0] && s1[i] < s2[len_s2 - 1] && s1[i] > s2[len_s2 - 2])
		return (1);
	return (0);
}

int	is_suitable_2(int *s1, int *s2, int len_s2, int i)
{
	if (s1[i] < s2[1] && s1[i] < s2[0] && s1[i] > s2[len_s2 - 1])
		return (1);
	return (0);
}

int	is_suitable(int *s1, int *s2, int i1, int i2)
{
	if (s1[i1] < s2[i2] && s1[i1] < s2[i2 - 1] && s1[i1] > s2[i2 - 2])
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

int	*ft_fstmv(int *a, int *b, int *alen_blen, int **lis_and_lisl)
{
	int	*i1_i2;
	int	moves;
	int	i;
	int	j;

	moves = 100000;
	i1_i2 = ft_malloc(2 * 4);
	i = -1;
	while (++i < alen_blen[0])  /// remove "-1"
	{
		/// see how to make better the next 4 lines
		while (i < alen_blen[0] && ft_islis(lis_and_lisl, a[i]))
			i++;
		if (i >= alen_blen[0])
			break;
		if (is_lowest(a, alen_blen[0], i))
			updt_fstmv(i, find_lowest_id(b, alen_blen[1]), &moves, i1_i2);
		else if (is_max(a, alen_blen[0], i))
			updt_fstmv(i, find_max_id(b, alen_blen[1]), &moves, i1_i2);
		else
		{	
			if (is_suitable_1(a, b, alen_blen[1], i))
				updt_fstmv(i, 0, &moves, i1_i2);
			if (is_suitable_2(a, b, alen_blen[1], i))
				updt_fstmv(i, 1, &moves, i1_i2);
	/// j1 parte da 2 poiche i primi due casi sono "speciali" e gestiti da due diverse funzioni ///
			j = 1;
	/// impongo di vedere solo fino a dieci posizioni nello stack b ///
			while (++j < alen_blen[1] && j < 10) /// remove -1
				if (is_suitable(a, b, i, j))
					updt_fstmv(i, j, &moves, i1_i2);
			/// think about creating special case for last element of b like the first two
		}
	}
	return (i1_i2); 
}
