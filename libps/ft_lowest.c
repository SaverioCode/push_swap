/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 00:06:00 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/15 02:53:02 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_lowest(int *stack, int len_s, int i)
{
	int	j;

	j = -1;
	while (++j < len_s)
		if (stack[i] > stack[j])
			return (0);
	return (1);
}

int	find_lowest_id(int *stack, int len_s)
{
	int	i;
	int	lowest;

	i = -1;
	lowest = 0;
	while (++i < len_s)
		if (stack[lowest] < stack[i])
			lowest = i;
	return (lowest);
}
