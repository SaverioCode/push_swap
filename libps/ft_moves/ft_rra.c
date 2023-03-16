/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 23:08:56 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/16 23:10:23 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	ft_rra(t_stack *s, int flag)
{
	int	i;
	int	tmp1;
	int	tmp2;

	i = 0;
	tmp1 = s->a[i];
	while (++i < s->len_a)
	{
		tmp2 = s->a[i];
		s->a[i] = tmp1;
		tmp1 = tmp2;
	}
	s->a[0] = tmp1;
	if (flag == 1)
		write(1, "rra\n", 4);
}