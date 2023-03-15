/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:19:12 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/15 23:46:21 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	ft_ra(t_stack *s, int flag)
{
	int	i;
	int	tmp1;
	int	tmp2;

	i = s->len_a - 1;
	tmp1 = s->a[i];
	while (--i >= 0)
	{
		tmp2 = s->a[i];
		s->a[i] = tmp1;
		tmp1 = tmp2;
	}
	s->a[s->len_a - 1] = tmp1;
	if (flag == 1)
		write(1, "rb\n", 3);
}
