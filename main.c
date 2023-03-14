/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:19:01 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/14 02:40:13 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps/push_swap.h"

void	push_swap(int *a, int *b, int *len_a, int *len_b)
{
	int	*lis;
	int	lis_len;
	int	*i1_i2;  // numero da inserire, indice del numero da inserire, indice del numero nell'altro stack
	
	lis_len = 0;
	/// maybe just put the first 2 in b
	b = ft_pb(&a, b, len_a, len_b);
	b = ft_pb(&a, b, len_a, len_b);
	b = ft_pb(&a, b, len_a, len_b);
	lis = ft_lis(a, *len_a, &lis_len);
	/// testing ///
	int k = -1;
	while (++k < lis_len)
		printf("%d ", lis[k]);
	printf("\n");
	/// end testing ///
	while (*len_a != lis_len)
	{
		// write(1, "ASP\n", 4); //////
		i1_i2 = ft_fstmv(a, b, *len_a, *len_b);
		// write(1, "A0P\n", 4); //////
		// if (0)  ////
		// 	break; ///
		while (i1_i2[0] > 0 && i1_i2[1] > 0 && i1_i2[0]-- && i1_i2[1]--)
			ft_rr(a, b, *len_a, *len_b);
		// write(1, "A1P\n", 4); //////
		// printf("i1: %d	i2: %d\n", i1_i2[0], i1_i2[1]);  /////
		while (i1_i2[0] > 0 && i1_i2[0]--)
			ft_ra(a, *len_a, 1);
		// write(1, "A2P\n", 4); //////
		// printf("i1: %d	i2: %d\n", i1_i2[0], i1_i2[1]);  /////
		while (i1_i2[1] > 0 && i1_i2[1]--)
			ft_rb(b, *len_b, 1);
		// write(1, "A3P\n", 4); //////
		b = ft_pb(&a, b, len_a, len_b);
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
	write(1, "A1\n", 3);
	ft_check(ac, av[1], &len_a);
	a = ft_malloc(len_a * 4);
	b = ft_malloc(1);
	ft_astai(a, av[1]);
	// do the magic //
	write(1, "A\n", 2);
	push_swap(a, b, &len_a, &len_b);   /// still in testing
	write(1, "B\n", 2); /////////
	// magic ended //
	/// testing ///
	int i = -1;
	while (++i < len_b)
		printf("%d ", b[i]);
	printf("\n");
	i = -1;
	while (++i < len_a)
		printf("%d ", a[i]);
	printf("\n");
	/// end testing ///
	free(a);
	free(b);
	return (0);
}
