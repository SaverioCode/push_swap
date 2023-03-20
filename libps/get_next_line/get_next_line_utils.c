/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:24:41 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/02/17 01:02:48 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char	*str, int c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != c && str[i])
		i++;
	if (str[i] != c)
		i--;
	return (i);
}

char	*ft_strchr(char *str, char c)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = 0;
	}
	if (!s1[0] && !s2[0])
		return (ft_free(s1, s2));
	str = malloc(ft_strlen(s1, 0) + ft_strlen(s2, 0) + 1);
	if (!str)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j])
		str[i + j] = s2[j];
	str[i + j] = 0;
	ft_free(s1, s2);
	return (str);
}

char	*ft_get_line(char *str)
{
	int		i;
	char	*dest;
	int		l;

	if (!str)
		return (ft_free(str, NULL));
	l = ft_strlen(str, 10) + 1;
	dest = malloc(l + 1);
	if (!dest)
		return (NULL);
	i = -1;
	while (++i < l)
		dest[i] = str[i];
	dest[i] = 0;
	return (dest);
}

char	*ft_backup(char	*backup)
{
	char	*str;
	int		l;
	int		i;

	if (!backup)
		return (ft_free(backup, NULL));
	l = ft_strlen(backup, 10) + 1;
	str = malloc(ft_strlen(backup, 0) - l + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (backup[++i + l])
		str[i] = backup[i + l];
	str[i] = 0;
	free(backup);
	return (str);
}
