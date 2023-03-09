/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:37:52 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/09 16:02:25 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ascending(int *a, int i, int tmp, int *lis)
{
	if (tmp < a[i] && ++(*lis))
		tmp = a[i];
	return (tmp);
}

int	discending(int *a, int i, int tmp, int *lis)
{
	if (tmp > a[i] && ++(*lis))
		tmp = a[i];
	return (tmp);
}

int	*ft_rev_lis(int *a, int len_a, int index, int f(int *, int, int, int*))
{
	int	lis;
	int	tmp;
	int	i;
	int	i_and_lis[2];

	i_and_lis[0] = len_a;
	i_and_lis[1] = 0;
	lis = 1;
	tmp = *a;
	while (index > len_a / 2)
	{
		i = index;
		while (--i >= 0)
			tmp = f(*a, i, tmp, &lis);
		if ((i - lis) < (i_and_lis[0]) - (i_and_lis[1]))
		{
			i_and_lis[0] = i;
			i_and_lis[1] = lis;
		}
		index--;
	}
	return (i_and_lis);
}

int	*ft_lis(int *a, int len_a, int index, int f(int *, int, int, int *))
{
	int	lis;
	int	tmp;
	int	i;
	int	i_and_lis[2];

	i_and_lis[0] = len_a;
	i_and_lis[1] = 0;
	lis = 1;
	tmp = *a;
	while (index < len_a / 2)
	{
		i = index;
		while (++i < len_a)
			tmp = f(*a, i, tmp, &lis);
		if ((i - lis) < (i_and_lis[0]) - (i_and_lis[1]))
		{
			i_and_lis[0] = i;
			i_and_lis[1] = lis;
		}
		index++;
	}
	return (i_and_lis);
}
