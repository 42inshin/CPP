# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/29 10:56:25 by inshin            #+#    #+#              #
#    Updated: 2022/02/01 02:20:38 by inshin           ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME		=	pure
SRC			=	main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
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

