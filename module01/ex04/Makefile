# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 13:31:33 by mbarut            #+#    #+#              #
#    Updated: 2021/11/16 13:24:43 by mbarut           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=sed

SRC=main.cpp

CC=clang++

CFLAGS= -Wall -Werror -Wextra -o

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(CFLAGS) $(NAME)

clean:
	@rm -f ./*.o ./*.replace

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re