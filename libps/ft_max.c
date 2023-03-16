/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 23:15:31 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/16 01:01:20 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_max(int *stack, int len_s, int num)
{
	int	j;

	j = -1;
	while (++j < len_s)
		if (num < stack[j])
			return (0);
	return (1);
}

int	find_max_id(int *stack, int len_s)
{
	int	i;
	int	max;

	i = -1;
	max = 0;
	while (++i < len_s)
		if (stack[max] < stack[i])
			max = i;
	return (max + 1);
}
