/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:51:27 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/12 19:40:21 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_H
# define MOVES_H

# include "../push_swap.h"

void	ft_rrb(int *b, int len_b, int flag);
void	ft_ra(int *a, int len_a, int flag);
void	ft_rb(int *b, int len_b, int flag);
void	ft_rr(int *a, int *b , int len_a, int len_b);
void	ft_sa(int *a, int len_a);
int		*ft_pb(int **a, int *b, int *len_a, int *len_b);
int		*ft_new_a(int *a, int len_a);

#endif