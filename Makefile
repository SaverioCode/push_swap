# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgarzi-c <fgarzi-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 21:48:18 by fgarzi-c          #+#    #+#              #
#    Updated: 2023/03/09 00:42:12 by fgarzi-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIB_M = libps/ft_moves/moves.a
LIB_L = libps/libps.a
SRCS = main.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(%.c)
	@$(CC) $(CFLAGS) -c $(SRCS)
	@make -C libps/ft_moves
	@make -C libps
	@$(CC) $(CFLAGS) $(OBJS) $(LIB_M) $(LIB_L) -o $(NAME)

%.c: %.o
	@$(CC) $(CFLAGS) -o $<

clean:
	@rm -f $(OBJS)
	@make clean -C libps/ft_moves
	@make clean -C libps
	
fclean: clean
	@rm -f $(NAME) $(LIB_M)
	@make fclean -C libps/ft_moves
	@make fclean -C libps
	
re: fclean all

.PHONY: all clean fclean re
