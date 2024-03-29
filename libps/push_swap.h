/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:51:27 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/20 08:06:25 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_moves/moves.h"
# include "get_next_line/get_next_line.h"

void	ft_check(int ac, char **str, int *len);
void	ft_astai(int *a, char **av, int ac);
int		ft_atoi(const char *str);
void	ft_lis(t_stack *s);
int		ft_islis(t_stack *s, int num);
void	ft_fstmv(t_stack *s);
void	updt_fstmv(int id_from, int id_to, t_stack *s, int flag);
void	updt_fstmv_crossed(int id_from, int id_to, t_stack *s, int flag);
int		is_suitable_0(int *s_from, int *s_to, int len_to, int i);
int		is_suitable(int *s_from, int *s_to, int id_from, int id_to);
void	set_len_from_and_len_to(int len_from, int len_to, t_stack *s);
int		fstmv_eq(int id_from, int id_to, t_stack *s);
int		fstmv_eq_rev(int id_from, int id_to, t_stack *s);
int		fstmv_eq_crossed(int id_from, int id_to, t_stack *s);
int		fstmv_eq_crossed_rev(int id_from, int id_to, t_stack *s);
int		is_lowest(int *stack, int len_s, int num);
int		find_lowest_id(int *stack, int len_s);
int		is_max(int *stack, int len_s, int num);
int		find_max_id(int *stack, int len_s);
void	ft_make_moves(t_stack *s);
void	ft_make_moves_to_the_right(t_stack *s, void rr_from(), void rr_to());
void	ft_make_moves_to_the_left(t_stack *s, void r_from(), void r_to());
void	ft_make_moves_crossed(t_stack *s, void rr_from(), void r_to());
void	handle_three(t_stack *s);

#endif