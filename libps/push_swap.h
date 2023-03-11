/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:51:27 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/10 00:32:43 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_check(int ac, char *str, int *len);
void	ft_astai(int *a, char *av);
int		ft_atoi(const char *str);
int		*ft_rev_lis(int *a, int len_a, int index, int f());
int		ascending(int *a, int i, int tmp, int *len);
int		descending(int *a, int i, int tmp, int *len);
void	*ft_malloc(int bytes);
int		**ft_lis(int *stack, int s_len);

#endif