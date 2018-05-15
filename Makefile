# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cooswold <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/12 21:23:50 by cooswold          #+#    #+#              #
#    Updated: 2018/05/15 15:43:46 by cooswold         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = board_check.c checker.c dimensions.c grow_board.c place.c solve.c \
	 	board_size.c convert.c main.c remove.c blank_board.c field_checker.c \
	   	piece_counter.c ft_putstr.c

CC = gcc

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror
REMOVE = /bin/rm -f

$(NAME):
	$(CC) -o $(NAME) $(CFLAGS) $(SRC)
	$(CC) -c $(CFLAGS) $(SRC)

all: $(NAME)

clean:
	$(REMOVE) $(OBJ)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY : all, re, clean, fclean
