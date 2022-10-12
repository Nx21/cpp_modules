# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/03 10:54:07 by nhanafi           #+#    #+#              #
#    Updated: 2022/10/09 09:52:18 by nhanafi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = megaphone.cpp
OBJ = $(SRC:.c=.o)
NAME = megaphone
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@                      

%.o: %.c 
	$(GCC) -c $< -o $@
clean:
	rm -rf $(ODIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : re fclean clean all