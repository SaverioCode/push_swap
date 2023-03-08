/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:39:44 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/08 23:45:29 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "moves.h"

int	*ft_new_a(int *a, int len_a)
{
	int	*new_a;
	int	i;

	if (len_a == 0)
		len_a = 1;
	new_a = malloc(len_a * 4);
	if (!new_a)
		exit(0);
	i = -1;
	while (++i < len_a)
		new_a[i] = a[i + 1];
	free(a);
	return (new_a);
}
