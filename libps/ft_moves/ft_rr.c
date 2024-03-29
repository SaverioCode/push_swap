/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:34:45 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/20 09:06:11 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	ft_rr(t_stack *s, int flag)
{
	ft_ra(s, 0);
	ft_rb(s, 0);
	if (flag == 1)
		write(1, "rr\n", 3);
}
