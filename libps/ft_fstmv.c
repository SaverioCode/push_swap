/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstmv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:12:00 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/14 02:30:40 by fgarzi-c         ###   ########.fr       */
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

int	*ft_fstmv(int *a, int *b, int len_a, int len_b)
{
	int	*i1_i2;
	int	moves;
	int	i;
	int	j;
	int *lis;
	int lis_len;

	lis_len = 0;
	moves = 100000;
	lis = ft_lis(a, len_a, &lis_len);
	/// testing ///
	int k = -1;
	while (++k < lis_len)
		printf("%d ", lis[k]);
	printf("\n");
	/// end testing ///
	i1_i2 = ft_malloc(2 * 4);
	i = -1;
	while (++i < len_a)
	{
		// write(1, "AFT\n", 4); //////
		while (ft_islis(lis, lis_len, a[i]) && i < len_a)
			i++;
		// write(1, "A1FT\n", 5); //////
		if (is_lowest(a, len_a, i))
{			updt_fstmv(i, find_lowest_id(b, len_b), &moves, i1_i2);
		// write(1, "A2FT\n", 5); //////
		}
		else if (is_max(a, len_a, i))
{			updt_fstmv(i, find_max_id(b, len_b), &moves, i1_i2);
		// write(1, "A3FT\n", 5); //////
		}
		else
		{	
			if (is_suitable_1(a, b, len_b, i))
				updt_fstmv(i, 0, &moves, i1_i2);
			if (is_suitable_2(a, b, len_b, i))
				updt_fstmv(i, 1, &moves, i1_i2);
	/// j1 parte da 2 poiche i primi due casi sono "speciali" e gestiti da due diverse funzioni ///
			j = 1;
	/// impongo di vedere solo fino a dieci posizioni nello stack b ///
			while (++j < len_b && j < 10)
				if (is_suitable(a, b, i, j))
					updt_fstmv(i, j, &moves, i1_i2);
		}
		// write(1, "A4FT\n", 5); //////
	}
	free(lis);
	printf("FSTMV	i1: %d	i2: %d\n", i1_i2[0], i1_i2[1]); ///////
	return (i1_i2);
}
