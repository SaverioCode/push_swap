/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_astai.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 02:20:23 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/20 07:06:39 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_astai(int *a, char **av, int ac)
{
	char	tmp[12];
	int		i;
	int		j;
	int		k;

	k = 0;
	j = -1;
	while (++k < ac)
	{
		while (*av[k])
		{
			i = -1;
			if (*av[k] == 32)
				av[k]++;
			while ((*av[k] > 47 && *av[k] < 58) || *av[k] == 45)
			{
				tmp[++i] = *av[k];
				(av[k])++;
			}
			tmp[++i] = 0;
			a[++j] = ft_atoi(tmp);
		}
	}
}
