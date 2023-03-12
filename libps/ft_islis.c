/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 23:39:51 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/11 23:40:59 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islis(int *stack, int num)
{
	while (*stack)
	{
		if (num == *stack)
			return (1);
		stack++;
	}
	return (0);
}
