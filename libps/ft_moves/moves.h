/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:51:27 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/20 11:29:03 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_H
# define MOVES_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct stack_info
{
	int	*a;
	int	*b;
	int	len_a;
	int	len_b;
	int	*lis;
	int	len_l;
	int	moves;
	int	id_from;
	int	id_to;
	int	len_from;
	int	len_to;
	int	rev_or_not;
}	t_stack;

void	ft_rra(t_stack *s, int flag);
void	ft_rrb(t_stack *s, int flag);
void	ft_rrr(t_stack *s, int flag);
void	ft_ra(t_stack *s, int flag);
void	ft_rb(t_stack *s, int flag);
void	ft_rr(t_stack *s, int flag);
void	ft_sa(t_stack *s, int flag);
void	ft_sb(t_stack *s, int flag);
void	ft_ss(t_stack *s, int flag);
void	ft_pb(t_stack *s, int flag);
void	ft_pa(t_stack *s, int flag);
void	*ft_malloc(int bytes);

#endif