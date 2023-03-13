/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:19:01 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/14 00:24:10 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps/push_swap.h"

void	push_swap(int *a, int *b, int *len_a, int *len_b)
{
	int	*lis;
	int	lis_len;
	int	*i1_i2;  // numero da inserire, indice del numero da inserire, indice del numero nell'altro stack
	
	lis_len = 0;
	lis = ft_lis(a, len_a, &lis_len);
	while (len_a > lis_len)
	{
		i1_i2 = ft_fstmv(*a, *b, len_a, len_b);
		while (i1_i2[0] > 0 && i1_i2[1] > 0 && --i1_i2[0] && --i1_i2[1])
			ft_rr(a, b, len_a, len_b);
		while (i1_i2[0] > 0 && --i1_i2[0])
			ft_ra(a, len_a, 1);
		while (i1_i2[1] > 0 && --i1_i2[1])
			ft_rb(b, len_b, 1);
		ft_pb(&a, b, &len_a, &len_b);
	}
	free(i1_i2);
	free(lis);
}

int	main(int ac, char **av)
{
	int			*a;
	int			*b;
	int			len_a;
	int			len_b;

	len_a = 1;
	len_b = 0;
	ft_check(ac, av[1], &len_a);
	a = ft_malloc(len_a * 4);
	b = ft_malloc(1);
	ft_astai(a, av[1]);
	// do the magic //
	// push_swap(&a, &b, &len_a, &len_b);
	write(1, "B\n", 2); /////////
	// magic ended //
	/// testing ///
	int i = -1;
	while (++i < len_b)
		printf("%d ", b[i]);
	write(1, "\n", 1);
	i = -1;
	while (++i < len_a)
		printf("%d ", a[i]);
	write(1, "\n", 1);
	/// end testing ///
	free(a);
	free(b);
	return (0);
}
