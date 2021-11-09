# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 15:35:53 by mbarut            #+#    #+#              #
#    Updated: 2021/11/09 21:48:14 by mbarut           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=interface

SRC=AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

CC=clang++

CFLAGS= -Wall -Werror -Wextra -g -o

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(CFLAGS) $(NAME)

clean:
	@rm -f ./*.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re