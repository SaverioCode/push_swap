/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:39:44 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/15 23:52:26 by fgarzi-c         ###   ########.fr       */
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
