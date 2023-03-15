/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:29:54 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/15 23:52:15 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	ft_pb(t_stack *s)
{
	int	*new_b;
	int	i;

	new_b = ft_malloc(++(s->len_b) * 4);
	i = 0;
	new_b[i] = s->a[i];
	while (++i < s->len_b)
		new_b[i] = s->b[i - 1];
	(s->len_a)--;
	free(s->b);
	ft_new_a(s);
	write(1, "pb\n", 3);
	s->b = new_b;
}
