# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 02:17:40 by inshin            #+#    #+#              #
#    Updated: 2021/12/20 00:29:38 by inshin           ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME	=	Megaphone

CC		=	clang++
CFLAG	=	-Wall -Wextra -Werror
SRC		=	Megaphone.cpp

$(NAME):
	$(CC) $(CFLAG) $(SRC) -o $@

all: $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: $(NAME) all clean re
