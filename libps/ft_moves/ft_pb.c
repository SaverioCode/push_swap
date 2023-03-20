/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:29:54 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/20 09:06:53 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	ft_new_a(t_stack *s)
{
	int	*new_a;
	int	i;

	if (s->len_a == 0)
		s->len_a = 1;
	new_a = malloc(s->len_a * 4);
	if (!new_a)
		exit(0);
	i = -1;
	while (++i < s->len_a)
		new_a[i] = s->a[i + 1];
	free(s->a);
	s->a = new_a;
}

void	ft_pb(t_stack *s, int flag)
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
	if (flag == 1)
		write(1, "pb\n", 3);
	s->b = new_b;
}
