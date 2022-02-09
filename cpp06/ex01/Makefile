# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/10 03:03:04 by inshin            #+#    #+#              #
#    Updated: 2022/02/10 03:03:06 by inshin           ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror

NAME		=	Serialization
SRC			=	main.cpp Data.cpp
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
