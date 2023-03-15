/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:37:52 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/16 00:12:11 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_len(t_stack *s, int *M, int i)
{
	int	low;
	int	mid;
	int	hi;

	low = 1;
	hi = s->len_l + 1;
	while (low < hi)
	{
		mid = low + (hi - low) / 2;
		if (s->a[M[mid]] >= s->a[i])
			hi = mid;
		else
			low = mid + 1;
	}
	return (low);
}

void	create_lis(t_stack *s, int *P, int *M)
{
	int	*arr;
	int	i;
	int	j;

	arr = ft_malloc(s->len_l * 4);
	j = M[s->len_l];
	i = s->len_l - 1;
	while (i >= 0)
	{
		arr[i] = s->a[j];
		j = P[j];
		i--;
	}
	s->lis = arr;
}

void	ft_lis(t_stack *s)
{
	int	len_a;
	int	*P;
	int	*M;
	int	newl;
	int	i;

	len_a = s->len_a;
	P = ft_malloc(len_a * 4);
	M = ft_malloc((len_a + 1) * 4);
	s->len_l = 0;
	i = -1;
	while (++i < len_a)
	{
		newl = find_len(s, M, i);
		P[i] = M[newl - 1];
		M[newl] = i;
		if (newl > s->len_l)
			s->len_l = newl;
	}
	create_lis(s, P, M);
	free(P);
	free(M);
}
