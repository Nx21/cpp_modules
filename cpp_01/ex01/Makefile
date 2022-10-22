# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 22:10:10 by nhanafi           #+#    #+#              #
#    Updated: 2022/10/21 23:56:34 by nhanafi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = Zombie.cpp main.cpp zombieHorde.cpp
INC = Zombie.hpp
OBJ = $(SRC:.cpp=.o)
NAME = Moarbrainz
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@                      

%.o:%.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : re fclean clean all