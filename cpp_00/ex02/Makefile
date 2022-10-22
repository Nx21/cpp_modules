# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 01:32:10 by nhanafi           #+#    #+#              #
#    Updated: 2022/10/21 03:58:04 by nhanafi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = Account.cpp tests.cpp
INC = Account.hpp
OBJ = $(SRC:.cpp=.o)
NAME = TheJobOfYourDreams
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@                      

%.o: %.cpp $(INC)
	$(GCC) -c $< -o $@
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : re fclean clean all