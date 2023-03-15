/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_first_three.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 00:35:25 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/15 23:35:34 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_first_three(t_stack *s)
{
	int	num;

	if (s->a[0] < s->a[1])
		ft_sa(s->a, s->len_a);
	ft_pb(s);
	ft_pb(s);
	num = s->a[0];
	if (((s->b)[0] > num && (s->b)[1] > num) || ((s->b)[0] < num && (s->b)[1] < num))
	{	
		if ((s->b)[0] > (s->b)[1])
			ft_rb(s->b, s->len_b, 1);
	}
	else if ((s->b)[0] < (s->b)[1])
		ft_rb(s->b, s->len_b, 1);
	ft_pb(s);
}
