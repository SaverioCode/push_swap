/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:19:01 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/18 10:52:59 by fgarzi-c         ###   ########.fr       */
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
	free(s->lis);
}

int	main(int ac, char **av)
{
	t_stack	s;

	s.len_a = 1;
	s.len_b = 0;
	ft_check(ac, av, &s.len_a);
	s.a = ft_malloc(s.len_a * 4);
	s.b = ft_malloc(1);
	ft_astai(s.a, av);
	if  (s.len_a == 3)
		handle_three(&s);
	push_swap(&s);
	free(s.a);
	free(s.b);
	return (0);
}
