/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 23:39:51 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/12 19:28:01 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islis(int *lis, int lis_len, int num)
{
	int	i;

	i = 0;
	while (i < lis_len)
		if (lis[i] == num)
			return (1);
	return (0);
}
