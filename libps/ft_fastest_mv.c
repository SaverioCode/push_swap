/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fastest_mv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:12:00 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/12 19:09:54 by fgarzi-c         ###   ########.fr       */
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

void	updt_fstmv(int i1, int i2, int *moves, int *i1_i2)
{
	if ((2 * i1) - i2 < moves)
	{
		i1_i2[0] = i1;
		i1_i2[1] = i2;
		*moves = (2 * i1) - i2;
	}
}

int	*ft_fstmv(int *a, int *b, int len_a, int len_b)
{
	int	*i1_i2;
	int	moves;
	int	i;
	int	j;

	moves = 100000;
	i1_i2 = ft_malloc(2 * 4);
	i = 0;
	/// impongo di vedere solo fino a dieci posizioni nello stack a ///
	while (i < len_a && i < 10)
	{
	/// j1 parte da 2 poiche i primi due casi sono "speciali" e gestiti da due diverse funzioni ///
		j = 2;
	/// impongo di vedere solo fino a dieci posizioni nello stack b ///
		if (is_suitable_1(a, b, len_b, i))
			updt_fstmv(i, 0, &moves, i1_i2);
		if (is_suitable_2(a, b, len_b, i))
			updt_fstmv(i, 1, &moves, i1_i2);
		while (j < len_b && j < 10)
		{
			if (is_suitable(a, b, i, j))
				updt_fstmv(i, j, &moves, i1_i2);
			j++;
		}
		i++;
	}
	return (i1_i2);
}