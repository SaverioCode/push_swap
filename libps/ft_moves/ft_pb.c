/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:29:54 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/08 23:45:23 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

int	*pb(int **a, int *b, int *len_a, int *len_b)
{
	int	*new_b;
	int	i;

	new_b = malloc(++(*len_b) * 4);
	if (!new_b)
		exit(0);
	i = 0;
	new_b[i] = (*a)[i];
	while (++i < *len_b)
		new_b[i] = b[i - 1];
	(*len_a)--;
	free(b);
	*a = ft_new_a(*a, *len_a);
	write(1, "pb\n", 3);
	return (new_b);
}
