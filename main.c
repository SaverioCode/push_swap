/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:19:01 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/17 21:00:07 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps/push_swap.h"

void	ft_make_moves_to_the_left(t_stack *s, void r_from(), void r_to())
{
	while (s->id_from > 0 && s->id_to > 0)
	{
		ft_rr(s);
		s->id_from--;
		s->id_to--;
	}
	while (s->id_from > 0)
	{
		r_from(s, 1);
		s->id_from--;
	}
	while (s->id_to > 0)
	{
		r_to(s, 1);
		s->id_to--;
	}
}

void	ft_make_moves_to_the_right(t_stack *s, void rr_from(), void rr_to())
{
	while (s->id_from < s->len_from && s->id_to > s->len_to)
	{
		ft_rrr(s);
		s->id_from++;
		s->id_to++;
	}
	while (s->id_from < s->len_from)
	{
		rr_from(s, 1);
		s->id_from++;
	}
	while (s->id_to < s->len_to)
	{
		rr_to(s, 1);
		s->id_to++;
	}
}

void	push_swap(t_stack *s)
{
	ft_lis(s);
	s->moves = 1000;
	while (s->len_a != s->len_l)
	{
		ft_fstmv(s);
		if (s->rev_or_not)
			ft_make_moves_to_the_left(s, ft_ra, ft_rb);
		else
			ft_make_moves_to_the_right(s, ft_rra, ft_rrb);
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
	printf("len a: %d\n", s.len_a);
	int i = -1;
	while (++i < s.len_a)
		printf("%d ", s.a[i]);
	printf("\n");
	i = -1;
	while (++i < s.len_b)
		printf("%d ", s.b[i]);
	printf("\n");
	/// end testing ///
	free(s.a);
	free(s.b);
	return (0);
}
