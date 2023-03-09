/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:37:52 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/09 22:18:29 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ascending(int *a, int i, int tmp, int *len)
{
	if (tmp < a[i] && ++(*len))
		tmp = a[i];
	return (tmp);
}

int	descending(int *a, int i, int tmp, int *len)
{
	if (tmp > a[i] && ++(*len))
		tmp = a[i];
	return (tmp);
}

int	*ft_rev_lis(int *a, int len_a, int index, int f())
{
	int	lis;
	int	tmp;
	int	i;
	int	*i_and_lis;

	i_and_lis = ft_malloc(3 * 4);
	i_and_lis[0] = len_a;
	i_and_lis[1] = 0;
	tmp = *a;
	while (index > len_a / 2)
	{
		i = index;
		lis = 1;
		while (--i >= 0)
			tmp = f(a, i, tmp, &lis);
		if ((i - lis) < (i_and_lis[2] - i_and_lis[1]))
		{
			i_and_lis[0] = index;
			i_and_lis[1] = lis;
			i_and_lis[2] = i;
		}
		index--;
	}
	return (i_and_lis);
}

int	*ft_lis(int *a, int len_a, int index, int f())
{
	int	len;
	int	tmp;
	int	i;
	int	*i_and_lis;

	i_and_lis = ft_malloc(3 * 4);
	i_and_lis[2] = len_a;
	i_and_lis[1] = 0;
	tmp = *a;
	while (index < len_a / 2)
	{
		i = index;
		len = 1;
		while (++i < len_a)
			tmp = f(a, i, tmp, &len);
		printf("i - len: %d	i_and_lis[2] - i_and_lis[1]: %d\n", i - len, i_and_lis[2] - i_and_lis[1]);
		if ((i - len) < (i_and_lis[2] - i_and_lis[1]))
		{
			i_and_lis[0] = index;
			i_and_lis[1] = len;
			i_and_lis[2] = i;
		}
		index++;
	}
	return (i_and_lis);
}

// int	*ft_find_lis(int *a, int len_a)
// {
// 	int	*la_i_and_lis;
// 	int	*ld_i_and_lis;
// 	int	*rla_i_and_lis;
// 	int	*rld_i_and_lis;

// 	la_i_and_lis = ft_lis(a, len_a, 0, ascending);
// 	ld_i_and_lis = ft_lis(a, len_a, 0, descending);
// 	rla_i_and_lis = ft_rev_lis(a, len_a, len_a, ascending);
// 	rld_i_and_lis = ft_rev_lis(a, len_a, len_a, descending);
	
// }
