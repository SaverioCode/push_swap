/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:19:01 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/15 19:18:29 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps/push_swap.h"

void	push_swap(int **a, int **b, int *len_a, int *len_b)
{
	int	**lis_and_lisl;
	int	*i1_i2;  // numero da inserire, indice del numero da inserire, indice del numero nell'altro stack
	int alen_blen[2];

	lis_and_lisl = ft_lis(*a, *len_a);
	while (*len_a != lis_and_lisl[1][0])
	{
		alen_blen[0] = *len_a;
		alen_blen[1] = *len_b;
		i1_i2 = ft_fstmv(*a, *b, alen_blen, lis_and_lisl);
		while (i1_i2[0] > 0 && i1_i2[1] > 0 && i1_i2[0]-- && i1_i2[1]--)
			ft_rr(*a, *b, *len_a, *len_b);
		while (i1_i2[0] > 0 && i1_i2[0]--)
			ft_ra(*a, *len_a, 1);
		while (i1_i2[1] > 0 && i1_i2[1]--)
		{	ft_rb(*b, *len_b, 1);}
		*b = ft_pb(a, *b, len_a, len_b);
		free(i1_i2);
	}
	free(lis_and_lisl[0]);
	free(lis_and_lisl[1]);
	free(lis_and_lisl);
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
	/// handle special case if length of stack a is 3 ///
			/// do it here ///
	put_first_three(&a, &b, &len_a, &len_b);
	// /// testing ///
	int k = -1;
	while (++k < len_b)
		printf("%d ", b[k]);
	printf("\n");
	// /// end testing ///
	push_swap(&a, &b, &len_a, &len_b);   /// still in testing
	write(1, "B\n", 2); /////////
	// magic ended //
	/// testing ///
	int i = -1;
	while (++i < len_a)
		printf("%d ", a[i]);
	printf("\n");
	i = -1;
	while (++i < len_b)
		printf("%d ", b[i]);
	printf("\n");
	// printf("a: %p	b: %p\n", a, b);
	/// end testing ///
	free(a);
	free(b);
	return (0);
}
