# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 02:17:40 by inshin            #+#    #+#              #
#    Updated: 2022/01/19 09:52:08 by inshin           ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME	=	Megaphone

CXX		=	c++
CXXFLAG	=	-Wall -Wextra -Werror -std=c++98
SRC		=	Megaphone.cpp
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

re: clean all

.PHONY: all clean fclean re
