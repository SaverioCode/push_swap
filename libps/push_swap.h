/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:51:27 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/12 01:11:05 by fgarzi-c         ###   ########.fr       */
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
int		ft_islis(int *stack, int num);
int		*ft_fstmv(int *a, int *b, int len_a, int len_b);

#endif