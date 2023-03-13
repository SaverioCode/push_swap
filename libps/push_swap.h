/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:51:27 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/13 23:28:38 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "ft_moves/moves.h"

void	ft_check(int ac, char *str, int *len);
void	ft_astai(int *a, char *av);
int		ft_atoi(const char *str);
void	*ft_malloc(int bytes);
int		*ft_lis(int *stack, int s_len, int *lis_len);
int		ft_islis(int *lis, int lis_len, int num);
int		*ft_fstmv(int *a, int *b, int len_a, int len_b);
int		is_lowest(int *stack, int len_s, int i);
int		find_lowest_id(int *stack, int len_s);
int		is_max(int *stack, int len_s, int i);
int		find_max_id(int *stack, int len_s);

#endif