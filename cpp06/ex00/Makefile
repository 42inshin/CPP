# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 14:44:38 by inshin            #+#    #+#              #
#    Updated: 2022/02/09 18:38:50 by inshin           ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror

NAME		=	convert
SRC			=	main.cpp Convert.cpp
OBJ			=	$(SRC:.cpp=.o)

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
