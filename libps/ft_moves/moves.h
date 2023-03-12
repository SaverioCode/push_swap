/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:51:27 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/12 01:04:06 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_H
# define MOVES_H

# include "../push_swap.h"

void	ft_rrb(int **b, int len_b);
void	ft_rb(int **b, int len_b);
void	ft_sa(int *a, int len_a);
int		*ft_pb(int **a, int *b, int *len_a, int *len_b);
int		*ft_new_a(int *a, int len_a);

#endif