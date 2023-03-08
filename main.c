/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:19:01 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/09 00:10:47 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps/push_swap.h"

int	main(int ac, char **av)
{
	int			*a;
	int			*b;
	int			len_a;
	int			len_b;

	len_a = 1;
	len_b = 0;
	ft_check(ac, av[1], &len_a);
	a = malloc(len_a * 4);
	b = malloc(1);
	if (!a | !b)
		return (0);
	ft_astai(a, av[1]);
	/// testing ///
	// int j = -1;
	// while (++j < len_a)
	// 	printf("%d ", a[j]);
	// printf("\n");
	printf("C\n");
	/// end testing ///
	// do the magic //
	// push_swap(&a, &b, &len_a, &len_b);
	write(1, "B\n", 2); /////////
	// magic ended //
	/// testing ///
	int i = -1;
	while (++i < len_b)
		printf("%d ", b[i]);
	write(1, "\n", 1);
	/// end testing ///
	free(a);
	free(b);
	return (0);
}
