# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 23:20:04 by inshin            #+#    #+#              #
#    Updated: 2022/01/22 03:50:12 by inshin           ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME	=	weapon
CXX		=	c++
CXXFLAG	=	-Wall -Wextra -Werror -std=c++98
SRC		=	main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp
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

