/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:51:27 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/15 23:59:43 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_H
# define MOVES_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct stack_info
{
	int	*a;
	int	*b;
	int	len_a;
	int	len_b;
	int	*lis;
	int	len_l;
}	t_stack;

void	ft_rrb(t_stack *s, int flag);
void	ft_ra(t_stack *s, int flag);
void	ft_rb(t_stack *s, int flag);
void	ft_rr(t_stack *s);
void	ft_sa(t_stack *s);
void	ft_pb(t_stack *s);
void	ft_new_a(t_stack *s);
void	*ft_malloc(int bytes);

#endif