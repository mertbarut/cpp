# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 17:52:37 by mbarut            #+#    #+#              #
#    Updated: 2021/11/07 22:42:37 by mbarut           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=diamondtrap

SRC=ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp

CC=clang++

CFLAGS= -Wall -Werror -Wextra -Wshadow -Wno-shadow -o

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(CFLAGS) $(NAME)

clean:
	@rm -f ./*.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re