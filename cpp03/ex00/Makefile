# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/25 04:56:24 by inshin            #+#    #+#              #
#    Updated: 2022/01/26 12:00:46 by inshin           ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME		=	clapTrap
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror
SRC			=	main.cpp ClapTrap.cpp
OBJ			=	$(SRC:.cpp=.o)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

