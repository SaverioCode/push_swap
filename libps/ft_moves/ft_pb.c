/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:29:54 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/15 00:01:33 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

int	*ft_pb(int **a, int *b, int *len_a, int *len_b)
{
	int	*new_b;
	int	i;

	new_b = ft_malloc(++(*len_b) * 4);
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
