/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:52:24 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/20 06:53:29 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_if_ac_equal_two(char *str, int *len)
{
	while (*str)
	{
		if (*str == 45)
			str++;
		if ((*str < 48 && *str > 57) || !*str)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		while (*str > 47 && *str < 58)
			str++;
		if (*str && *str != 32)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		if (*str == 32 && (*len)++)
			str++;
	}
}

void	ft_check(int ac, char **str, int *len)
{
	int	i;
	
	if (ac < 2)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	else if (ac == 2)
		ft_if_ac_equal_two(str[1], len);
	else if (ac > 2)
	{
		i = 1;
		while (i < ac)
		{
			ft_if_ac_equal_two(str[i], len);
			i++;
		}
		*len = ac - 1;
	}
}
