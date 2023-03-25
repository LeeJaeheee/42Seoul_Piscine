# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaeheele <jaeheele@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 01:05:03 by jaeheele          #+#    #+#              #
#    Updated: 2022/09/16 03:09:28 by jaeheele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Werror -Wall -Wextra

SRC = ft_atoi.c ft_do_op.c ft_print.c main.c

OBJ = $(SRC:.c=.o)

RM = rm -f

NAME = do-op

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I .

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)


clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)
