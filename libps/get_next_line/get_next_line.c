/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:18:07 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/20 07:56:39 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char *s1, char *s2)
{
	if (s1)
		free(s1);
	if (s2)
		free(s2);
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*s_buf;
	char		*line;
	ssize_t		size;

	size = 1;
	while ((!s_buf || !ft_strchr(s_buf, 10)) && size)
	{
		line = malloc(1);
		if (!line)
			return (NULL);
		size = read(fd, line, 1);
		if (size < 0)
			return (ft_free(line, NULL));
		line[size] = 0;
		s_buf = ft_strjoin(s_buf, line);
	}
	line = ft_get_line(s_buf);
	s_buf = ft_backup(s_buf);
	return (line);
}
