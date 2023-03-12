/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:19:12 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/12 19:35:44 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

void	ft_rb(int *b, int len_b, int flag)
{
	int	i;
	int	tmp1;
	int	tmp2;

	i = len_b - 1;
	tmp1 = b[i];
	while (--i >= 0)
	{
		tmp2 = b[i];
		b[i] = tmp1;
		tmp1 = tmp2;
	}
	b[len_b - 1] = tmp1;
	if (flag == 1)
		write(1, "rb\n", 3);
}
