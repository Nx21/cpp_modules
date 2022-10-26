# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 03:00:55 by nhanafi           #+#    #+#              #
#    Updated: 2022/10/26 03:01:06 by nhanafi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
INC = HumanA.hpp HumanB.hpp Weapon.hpp
OBJ = $(SRC:.cpp=.o)
NAME = UnnecessaryViolence
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : re fclean clean all