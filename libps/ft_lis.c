/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:37:52 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/10 01:01:43 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_len(int *stack, int *M, int lis_len)
{
	int	low;
	int	mid;
	int	hi;
	int	i;

	i = 0;
	low = 1;
	hi = lis_len + 1;
	while (low < hi)
	{
		mid = low + (hi - low) / 2;
		if (stack[M[mid]] >= stack[i])
			hi = mid;
		else
			low = mid + 1;
	}
	return (low);
}

int	*create_lis(int *stack, int *P, int *M, int lis_len)
{
	int	*arr;
	int i;
	int	j;

	arr = ft_malloc(lis_len * 4);
	j = M[lis_len];
	while (i >= 0)
	{
		arr[i] = stack[j];
		j = P[j];
		i--;
	}
	return (arr);
}

int	**ft_lis(int *stack, int s_len)
{
	int **LIS;
	int	*P;
	int *M;
	int	len_newl[2];
	int	i;

	P = ft_malloc(s_len * 4);
	M = ft_malloc((s_len + 1) * 4);
	len_newl[0] = 0;
	i = 0;
	while (i < s_len)
	{
		len_newl[1] = find_len(stack, M, len_newl[0]);
		P[i] = M[len_newl[1] - 1];
		M[len_newl[1]] = i;
		if (len_newl[1] > len_newl[0])
			len_newl[0] = len_newl[1];
		i++;
	}
	LIS = malloc((len_newl[0] + 1) * 4);
	LIS[0][0] = len_newl[0];
	LIS[1] = create_lis(stack, M, P, len_newl[0]);
	free(P);
	free(M);
	return (LIS);
}
