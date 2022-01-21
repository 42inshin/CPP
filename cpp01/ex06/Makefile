# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/22 05:18:54 by inshin            #+#    #+#              #
#    Updated: 2022/01/22 06:31:31 by inshin           ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME	=	karenFilter
CXX		=	c++
CXXFLAG	=	-Wall -Wextra -Werror -std=c++98
SRC		=	main.cpp Karen.cpp
OBJ		=	$(SRC:.cpp=.o)

.cpp.o:
	$(CXX) $(CXXFLAG) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAG) $^ -o $@

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

