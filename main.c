/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:19:01 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/12 01:19:16 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libps/push_swap.h"




void	push_swap(int *a, int *b, int *len_a, int *len_b)
{
	int	*lis;
	int	lis_len;
	int	i;
	int	*num_ia_ib;  // numero da inserire, indice del numero da inserire, indice del numero nell'altro stack
	lis_len = 0;
	lis = ft_lis(a, len_a, &lis_len);
	i = 0;
	while (i < len_a && i < 10)
	{
		while (islis(lis, a[i]))
			i++;
		num_ia_ib = ft_fstmv(*a, *b, len_a, len_b);
		while (a[0] != num_ia_ib[0] && )
		{
			ft_rb()
		}
		i++;
	}
	free(num_ia_ib);
	free(lis);
}

int	main(int ac, char **av)
{
	int			*a;
	int			*b;
	int			len_a;
	int			len_b;

	len_a = 1;
	len_b = 0;
	ft_check(ac, av[1], &len_a);
	a = ft_malloc(len_a * 4);
	b = ft_malloc(1);
	ft_astai(a, av[1]);
	// do the magic //
	// push_swap(&a, &b, &len_a, &len_b);
	write(1, "B\n", 2); /////////
	// magic ended //
	/// testing ///
	int i = -1;
	while (++i < len_b)
		printf("%d ", b[i]);
	write(1, "\n", 1);
	/// end testing ///
	free(a);
	free(b);
	return (0);
}
