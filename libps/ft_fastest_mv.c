/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fastest_mv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:12:00 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/12 00:29:22 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_fstmv(int *a, int *b, int len_a, int len_b)
{
	int	*num_ia_ai;
	int	moves;
	int	i;
	int	j1;
	int	j2;

	moves = 1000000;
	num_ia_ai = ft_malloc(3 * 4);
	i = 0;
	/// impongo di vedere solo fino a dieci posizioni nello stack a ///
	while (i < len_a && i < 10)
	{
		j1 = 0;
		j2 = len_b;
	/// impongo di vedere solo fino a dieci posizioni nello stack b ///
		while (j1 < len_b && j1 < 10)
		{
			if (a[i] < b[j1] & a[i] < b[j2])
			{
				if ((2 * i) - j1 < moves)
				{
					moves = (2 * i) - j1;
					num_ia_ai[0] = a[i];
					num_ia_ai[1] = i;
					num_ia_ai[2] = j1;
				}
			}
			j1++;
			j2++;
			if (j2 > len_b)
				j2 = 0;
		}
		i++;
	}
	return (num_ia_ai);
}