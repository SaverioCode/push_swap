/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:19:01 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/16 01:17:03 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps/push_swap.h"

// void	ft_make_moves(t_stack *s)
// {
	
// }

void	push_swap(t_stack *s)
{
	ft_lis(s);
	s->moves = 1000;
	while (s->len_a != s->len_l)
	{
		ft_fstmv(s);
		while (s->id_from > 0 && s->id_to > 0 && s->id_from-- && s->id_to--)
			ft_rr(s);
		while (s->id_from > 0 && s->id_from--)
			ft_ra(s, 1);
		while (s->id_to > 0 && s->id_to--)
			ft_rb(s, 1);
		ft_pb(s);
		s->moves = 1000;
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
	push_swap(&s);
	// // magic ended //
	/// testing ///
	// printf("len a: %d\n", s.len_a);
	// int i = -1;
	// while (++i < s.len_a)
	// 	printf("%d ", s.a[i]);
	// printf("\n");
	// i = -1;
	// while (++i < s.len_b)
	// 	printf("%d ", s.b[i]);
	// printf("\n");
	/// end testing ///
	free(s.a);
	free(s.b);
	return (0);
}
