/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstmv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:12:00 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/16 01:48:53 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lowest_or_max(t_stack *s, int i)
{
	if (is_lowest(s->b, s->len_b, s->a[i]))
		updt_fstmv(i, find_lowest_id(s->b, s->len_b), s);
	else if (is_max(s->b, s->len_b, s->a[i]))
		updt_fstmv(i, find_max_id(s->b, s->len_b), s);
	else
		return (0);
	return (1);
}

void	ft_fstmv(t_stack *s)
{
	int	i;
	int	j;

	i = -1;
	while (++i < s->len_a)
	{
		while (i < s->len_a && ft_islis(s, s->a[i]))
			i++;
		if (i >= s->len_a)
			break ;
		if (!(lowest_or_max(s, i)))
		{
			if (is_suitable_0(s->a, s->b, s->len_b, i))
				updt_fstmv(i, 0, s);
			j = 0;
			while (++j < s->len_b)
				if (is_suitable(s->a, s->b, i, j))
					updt_fstmv(i, j, s);
		}
	}
}
