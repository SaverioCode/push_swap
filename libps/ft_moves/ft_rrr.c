/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 23:09:56 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/20 09:05:56 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	ft_rrr(t_stack *s, int flag)
{
	ft_rra(s, 0);
	ft_rrb(s, 0);
	if (flag == 1)
		write(1, "rrr\n", 4);
}
