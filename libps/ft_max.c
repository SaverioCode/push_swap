/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 23:15:31 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/13 23:26:23 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_max(int *stack, int len_s, int i)
{
	int	j;

	j = -1;
	while (++j < len_s)
		if (stack[i] < stack[j])
			return (0);
	return (1);
}

int	find_max_id(int *stack, int len_s)
{
	int	i;
	int	max;

	i = 0;
	max = i;
	while (i < len_s)
		if (stack[max] < stack[i])
			max = i;
	return (max);
}
