/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:51:27 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/16 00:23:46 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_moves/moves.h"

void	ft_check(int ac, char *str, int *len);
void	ft_astai(int *a, char *av);
int		ft_atoi(const char *str);
void	ft_lis(t_stack *s);
int		ft_islis(t_stack *s, int num);
int		*ft_fstmv(t_stack *s);
int		is_lowest(int *stack, int len_s, int i);
int		find_lowest_id(int *stack, int len_s);
int		is_max(int *stack, int len_s, int i);
int		find_max_id(int *stack, int len_s);
void	put_first_three(t_stack *s);

#endif