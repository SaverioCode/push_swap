/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:19:01 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/07 03:03:16 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int			*a;
	int			*b;
	int			len;

	len = 1;
	ft_check(ac, av[1], &len);
	a = malloc(len * 4);
	b = malloc(len * 4);
	if (!a | !b)
		return (0);
	ft_astai(&a, av[1]);
	// do the magic //
	free(a);
	free(b);
	return (0);
}
