/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:52:24 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/17 02:51:04 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check(int ac, char *str, int *len)
{
	if (ac != 2 || !*str)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	while (*str)
	{
		if (*str == 32 && (*len)++)
			str++;
		if (*str == 45)
			str++;
		if ((*str < 48 && *str > 57) | !*str)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		str++;
	}
}
