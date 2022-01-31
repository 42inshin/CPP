# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/29 10:56:25 by inshin            #+#    #+#              #
#    Updated: 2022/02/01 02:57:40 by inshin           ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out
SRC			=	main.cpp
OBJ			=	$(SRC:.cpp=.o)

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

all: $(NAME)

clean:
	rm -rf $(OBJ) $(W_OBJ)

fclean: clean
	rm -rf $(NAME) $(W_NAME)

re: fclean all

.PHONY: all clean fclean re

