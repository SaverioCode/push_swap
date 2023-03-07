/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:08:13 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/07 02:22:31 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	char	sign;
	int		value;
	int		i;

	value = 0;
	i = -1;
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
	return (value);
}
