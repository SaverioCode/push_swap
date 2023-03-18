/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:19:01 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/18 09:53:35 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps/push_swap.h"

void	ft_end_shorting(t_stack *s)
{
	int	lowest;

	lowest = find_lowest_id(s->a, s->len_a);
	if (lowest <= s->len_a / 2)
	{	
		while (lowest > 0)
		{
			ft_ra(s, 1);
			lowest--;
		}
	}
	if (lowest > s->len_a / 2)
	{
		while (lowest < s->len_a)
		{
			ft_rra(s, 1);
			lowest++;
		}
	}
}

void	push_swap(t_stack *s)
{
	s->tot_moves = 0; ///////
	ft_lis(s);
	while (s->len_a != s->len_l)
	{
		while (ft_islis(s, s->a[0]))
			ft_ra(s, 1);
		ft_pb(s);
	}
	while (s->len_b > 0)
	{
		ft_fstmv(s);
		ft_make_moves(s);
		ft_pa(s);
	}
	ft_end_shorting(s);
	printf("tot moves: %d\n", s->tot_moves); ///////
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
	// put_first_three(&s);
	push_swap(&s);
	// // magic ended //
	/// testing ///
	printf("len a: %d\n", s.len_a);
	int i = -1;
	while (++i < s.len_a)
		printf("%d ", s.a[i]);
	printf("\n");
	// i = -1;
	// if (s.len_b != 0)
	// {
	// 	while (++i < s.len_b)
	// 		printf("%d ", s.b[i]);
	// 	printf("\n");
	// }
	/// end testing ///
	free(s.a);
	free(s.b);
	return (0);
}
