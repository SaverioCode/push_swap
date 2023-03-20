/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_three.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 00:35:25 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/20 09:04:05 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_three(t_stack *s)
{
	if (s->a[0] < s->a[1] && s->a[1] < s->a[2])
		return ;
	else if (s->a[0] > s->a[1] && s->a[0] > s->a[2])
	{
		ft_ra(s, 1);
		if (s->a[0] > s->a[1])
			ft_sa(s, 1);
	}
	else if (s->a[0] < s->a[1] && s->a[1] > s->a[2])
	{
		ft_ra(s, 1);
		ft_sa(s, 1);
		ft_rra(s, 1);
	}
	else if (s->a[0] > s->a[1])
	{
		ft_sa(s, 1);
		if (s->a[0] < s->a[2])
			return ;
		ft_rra(s, 1);
	}
	else if (s->a[0] < s->a[1] && s->a[0] > s->a[2])
		ft_rra(s, 1);
}
