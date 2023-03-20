/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 07:44:44 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/20 11:27:11 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps/push_swap.h"
#include <stdio.h>

int	ft_execute_cmd(t_stack *s, char *cmd)
{
	if (cmd[0] == 's' && cmd[1] == 'a' && cmd[2] == '\n')
		ft_sa(s, 0);
	else if (cmd[0] == 's' && cmd[1] == 'b' && cmd[2] == '\n')
		ft_sb(s, 0);
	else if (cmd[0] == 's' && cmd[1] == 's' && cmd[2] == '\n')
		ft_ss(s, 0);
	else if (cmd[0] == 'p' && cmd[1] == 'a' && cmd[2] == '\n')
		ft_pa(s, 0);
	else if (cmd[0] == 'p' && cmd[1] == 'b' && cmd[2] == '\n')
		ft_pb(s, 0);
	else if (cmd[0] == 'r' && cmd[1] == 'a' && cmd[2] == '\n')
		ft_ra(s, 0);
	else if (cmd[0] == 'r' && cmd[1] == 'b' && cmd[2] == '\n')
		ft_rb(s, 0);
	else if (cmd[0] == 'r' && cmd[1] == 'r' && cmd[2] == '\n')
		ft_rr(s, 0);
	else if (cmd[0] == 'r' && cmd[1] == 'r' && cmd[2] == 'a' && cmd[3] == '\n')
		ft_rra(s, 0);
	else if (cmd[0] == 'r' && cmd[1] == 'r' && cmd[2] == 'b' && cmd[3] == '\n')
		ft_rrb(s, 0);
	else if (cmd[0] == 'r' && cmd[1] == 'r' && cmd[2] == 'r' && cmd[3] == '\n')
		ft_rrr(s, 0);
	else
		return (0);
	return (1);
}

void	ft_check_cmd(t_stack *s, char *cmd)
{
	size_t	len;

	len = ft_strlenreal(cmd);
	if (cmd[len - 1] != 10)
		return ;
	if (!ft_execute_cmd(s, cmd))
	{
		write(2, "Error: wrong command\n", 21);
		free(s->a);
		free(s->b);
		exit(0);
	}
}

void	ft_check_duplicates(t_stack *s)
{
	int	num;
	int	i;
	int	j;

	i = -1;
	while (++i < s->len_a)
	{
		num = s->a[i];
		j = i;
		while (++j < s->len_a)
		{	
			if (num == s->a[j])
			{
				write(2, "Error: duplicates numbers\n", 26);
				free(s->a);
				free(s->b);
				exit(0);
			}
		}
	}
}

void	ft_check_stacks(t_stack *s)
{
	int	num;
	int	i;

	if (s->len_b != 0)
	{
		write(1, "KO\n", 3);
		return ;
	}
	num = s->a[0];
	i = 0;
	while (++i < s->len_a)
	{
		if (num > s->a[i] || s->a[i] < s->a[i - 1])
		{
			write(1, "KO\n", 3);
			return ;
		}
	}
	write(1, "OK\n", 3);
}

int	main(int ac, char **av)
{
	t_stack	s;
	char	*cmd;

	s.len_a = 1;
	s.len_b = 0;
	ft_check(ac, av, &s.len_a);
	s.a = ft_malloc(s.len_a * 4);
	s.b = ft_malloc(1);
	ft_astai(s.a, av, ac);
	ft_check_duplicates(&s);
	cmd = get_next_line(0);
	while (cmd)
	{
		ft_check_cmd(&s, cmd);
		free(cmd);
		cmd = get_next_line(0);
	}
	free(cmd);
	ft_check_stacks(&s);
	free(s.a);
	free(s.b);
	return (0);
}
