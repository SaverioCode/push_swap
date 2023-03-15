/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_first_three.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 00:35:25 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/15 01:05:11 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_first_three(int	**a, int **b, int *len_a, int *len_b)
{
	int	num;

	if ((*a)[0] < (*a)[1])
		ft_sa(*a, *len_a);
	*b = ft_pb(a, *b, len_a, len_b);
	*b = ft_pb(a, *b, len_a, len_b);
	num = (*a)[0];
	if (((*b)[0] > num && (*b)[1] > num) || ((*b)[0] < num && (*b)[1] < num))
	{	
		if ((*b)[0] > (*b)[1])
			ft_rb(*b, *len_b, 1);
	}
	else if ((*b)[0] < (*b)[1])
		ft_rb(*b, *len_b, 1);
	*b = ft_pb(a, *b, len_a, len_b);
}
