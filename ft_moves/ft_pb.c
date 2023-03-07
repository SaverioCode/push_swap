/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:29:54 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/07 19:30:40 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(int **a, int **b, int *len_a, int *len_b)
{
	int	*new_a;
	int	*new_b;
	int	i;
	int	tmp;

	new_b = malloc(++(*len_b) * 4);
	if (!new_b)
		exit(0);
	i = -1;
	new_b[++i] = (*a)[i];
	while (++i < *len_b - 1)
		new_b[i] = (*b)[i - 1];
	(*a)++;
	(*len_a)--;
	free(*b);
	(*b) = new_b;
	write(1, "pb\n", 3);
}
