/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:37:52 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/11 22:19:58 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_len(int *stack, int *M, int lis_len, int i)
{
	int	low;
	int	mid;
	int	hi;

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

int	*create_lis(int *stack, int *P, int *M, int len)
{
	int	*arr;
	int	i;
	int	j;

	arr = ft_malloc(len * 4);
	j = M[len];
	i = len - 1;
	while (i >= 0)
	{
		arr[i] = stack[j];
		j = P[j];
		i--;
	}
	return (arr);
}

int	*ft_lis(int *stack, int s_len, int *lis_len)
{
	int	*lis;
	int	*P;
	int	*M;
	int	len_newl[2];
	int	i;

	P = ft_malloc(s_len * 4);
	M = ft_malloc((s_len + 1) * 4);
	len_newl[0] = 0;
	i = -1;
	while (++i < s_len)
	{
		len_newl[1] = find_len(stack, M, len_newl[0], i);
		P[i] = M[len_newl[1] - 1];
		M[len_newl[1]] = i;
		if (len_newl[1] > len_newl[0])
			len_newl[0] = len_newl[1];
	}
	*lis_len = len_newl[0];
	lis = create_lis(stack, P, M, len_newl[0]);
	free(P);
	free(M);
	return (lis);
}
