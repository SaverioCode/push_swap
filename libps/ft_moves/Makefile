# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 21:48:18 by fgarzi-c          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2023/03/17 23:30:13 by fgarzi-c         ###   ########.fr        #
=======
#    Updated: 2023/03/18 00:17:10 by fgarzi-c         ###   ########.fr        #
>>>>>>> 13ff442619e275b5eadb4f5c9dd62f40d0c270c0
#                                                                              #
# **************************************************************************** #

NAME = moves.a
SRCS = ft_pa.c ft_pb.c ft_rb.c ft_rrb.c ft_sa.c ft_rr.c \
	ft_ra.c ft_rra.c ft_rrr.c ft_malloc.c
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
