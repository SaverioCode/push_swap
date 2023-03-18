/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 23:27:31 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/17 23:53:20 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	ft_new_b(t_stack *s)
{
	int	*new_b;
	int	i;

	if (s->len_b == 0)
	{
		free(s->b);
		new_b = ft_malloc(4);
		s->b = new_b;
		return ;
	}
	new_b = malloc(s->len_b * 4);
	if (!new_b)
		exit(0);
	i = -1;
	while (++i < s->len_b)
		new_b[i] = s->b[i + 1];
	free(s->b);
	s->b = new_b;
}

void	ft_pa(t_stack *s)
{
	int	*new_a;
	int	i;

	new_a = ft_malloc(++(s->len_a) * 4);
	i = 0;
	new_a[i] = s->b[i];
	while (++i < s->len_a)
		new_a[i] = s->a[i - 1];
	(s->len_b)--;
	free(s->a);
	ft_new_b(s);
	write(1, "pa\n", 3);
	s->a = new_a;
}
