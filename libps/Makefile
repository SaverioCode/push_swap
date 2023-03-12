# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 21:48:18 by fgarzi-c          #+#    #+#              #
#    Updated: 2023/03/12 00:13:25 by fgarzi-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libps.a
SRCS = ft_astai.c ft_atoi.c ft_check.c ft_lis.c ft_lisd.c \
	ft_malloc.c ft_fastest_mv.c
	# ft_lower_num.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(%.c)
	@$(CC) $(CFLAGS) -c $(SRCS)
	@ar rcs $(NAME) $(OBJS)

%.c: %.o
	@$(CC) $(CFLAGS) -o $<

clean:
	@rm -f $(OBJS)
	
fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
