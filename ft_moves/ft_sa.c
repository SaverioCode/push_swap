/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:29:55 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/07 19:32:55 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sa(int **a, int len_a)
{
	int	tmp;

	if (len_a < 2)
		return ;
	tmp = (*a)[0];
	(*a)[0] = (*a)[1];
	(*a)[1] = tmp;
	write(1, "sa\n", 3);
}
