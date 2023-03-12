/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:19:12 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/12 19:36:04 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	ft_ra(int *a, int len_a, int flag)
{
	int	i;
	int	tmp1;
	int	tmp2;

	i = len_a - 1;
	tmp1 = a[i];
	while (--i >= 0)
	{
		tmp2 = a[i];
		a[i] = tmp1;
		tmp1 = tmp2;
	}
	a[len_a - 1] = tmp1;
	if (flag == 1)
		write(1, "rb\n", 3);
}
