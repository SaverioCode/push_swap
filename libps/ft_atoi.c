/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:08:13 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/20 11:45:42 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_min_max(long long num)
{
	if (num > INT_MAX || num < INT_MIN)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
}

int	ft_atoi(const char *str)
{
	char		sign;
	long long	value;
	int			i;

	value = 0;
	i = -1;
	sign = 0;
	while (str[++i])
	{
		if ((str[i] > 0 && (str[i] < 48)) || str[i] > 57)
		{
			if (value > 0 || sign)
				break ;
			else if (str[i] == 45 || str[i] == 43)
				sign = str[i];
			else if ((str[i] < 8 || str[i] > 13) && str[i] != 32)
				break ;
		}
		else if (str[i] > 47 && str[i] < 58)
			value = (value * 10) + (((int) str[i]) - 48);
	}
	if (sign == 45)
		value = -value;
	ft_check_min_max(value);
	return (value);
}
