/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:19:01 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/16 00:23:35 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps/push_swap.h"

void	push_swap(t_stack *s)
{
	int	*i1_i2;  // numero da inserire, indice del numero da inserire, indice del numero nell'altro stack
	int alen_blen[2];

	ft_lis(s);
	while (s->len_a != s->len_l)
	{
		i1_i2 = ft_fstmv(s);
		while (i1_i2[0] > 0 && i1_i2[1] > 0 && i1_i2[0]-- && i1_i2[1]--)
			ft_rr(s);
		while (i1_i2[0] > 0 && i1_i2[0]--)
			ft_ra(s, 1);
		while (i1_i2[1] > 0 && i1_i2[1]--)
			ft_rb(s, 1);
		ft_pb(s);
		free(i1_i2);
	}
	free(s->lis);
}

int	main(int ac, char **av)
{
	t_stack	s;

	s.len_a = 1;
	s.len_b = 0;
	ft_check(ac, av[1], &s.len_a);
	s.a = ft_malloc(s.len_a * 4);
	s.b = ft_malloc(1);
	ft_astai(s.a, av[1]);
	// do the magic //
	/// handle special case if length of stack a is 3 ///
			/// do it here ///
	put_first_three(&s);
	// /// testing ///
	// int k = -1;
	// while (++k < s.len_b)
	// 	printf("%d ", s.b[k]);
	// printf("\n");
	// // /// end testing ///
	push_swap(&s);   /// still in testing
	// write(1, "B\n", 2); /////////
	// // magic ended //
	/// testing ///
	// printf("len a: %d\n", s.len_a);
	// int i = -1;
	// while (++i < s.len_a)
	// 	printf("%d ", s.a[i]);
	// printf("\n");
	// i = -1;
	// while (++i < len_b)
	// 	printf("%d ", b[i]);
	// printf("\n");
	// printf("a: %p	b: %p\n", a, b);
	/// end testing ///
	free(s.a);
	free(s.b);
	return (0);
}
