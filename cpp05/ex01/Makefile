# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 01:43:26 by inshin            #+#    #+#              #
#    Updated: 2022/02/08 05:19:56 by inshin           ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror

NAME		=	a.out
SRC			=	main.cpp Bureaucrat.cpp Form.cpp
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
