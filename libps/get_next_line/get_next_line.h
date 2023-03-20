/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:25:00 by fgarzi-c          #+#    #+#             */
/*   Updated: 2023/03/20 10:23:01 by fgarzi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>

char	*get_next_line(int fd);
char	*ft_strchr(char *str, char c);
char	*ft_get_line(char *str);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char	*str, int c);
size_t	ft_strlenreal(char *str);
char	*ft_backup(char	*backup);
char	*ft_free(char *s1, char *s2);

#endif
