/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:10:22 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/16 01:33:30 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	ft_rrb(t_stack *s, int flag)
{
	int	i;
	int	tmp1;
	int	tmp2;

	i = 0;
	tmp1 = s->b[i];
	while (++i < s->len_b)
	{
		tmp2 = s->b[i];
		s->b[i] = tmp1;
		tmp1 = tmp2;
	}
	s->b[0] = tmp1;
	if (flag == 1)
		write(1, "rrb\n", 4);
}
