/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:10:22 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/07 19:30:39 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(int **b, int len_b)
{
	int	i;
	int	tmp1;
	int	tmp2;

	i = 0;
	tmp1 = (*b)[i];
	while (++i < len_b)
	{
		tmp2 = (*b)[i];
		(*b)[i] = tmp1;
		tmp1 = tmp2;
	}
	(*b)[0] = tmp1;
	write(1, "rrb\n", 4);
}
