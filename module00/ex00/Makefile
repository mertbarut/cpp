# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 21:25:54 by mbarut            #+#    #+#              #
#    Updated: 2021/10/28 21:29:31 by mbarut           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=megaphone

SRC=megaphone.cpp

CC=clang++

CFLAGS= -Wall -Werror -Wextra -o 

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(CFLAGS) $(NAME)

clean:
	@rm -f ./*.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re