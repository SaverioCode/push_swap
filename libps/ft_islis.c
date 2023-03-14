/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 23:39:51 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/14 22:57:03 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_islis(int **lis_and_lisl, int num)
{
	int	i;

	i = -1;
	while (++i < lis_and_lisl[1][0])
		if (lis_and_lisl[0][i] == num)
			return (1);
	return (0);
}
