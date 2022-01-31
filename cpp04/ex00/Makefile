# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/29 10:56:25 by inshin            #+#    #+#              #
#    Updated: 2022/01/31 17:17:03 by inshin           ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror

NAME		=	Animal
SRC			=	main.cpp Animal.cpp Dog.cpp Cat.cpp
OBJ			=	$(SRC:.cpp=.o)

W_NAME		=	WrongAnimal
W_SRC		=	WrongMain.cpp WrongAnimal.cpp WrongCat.cpp
W_OBJ		=	$(W_SRC:.cpp=.o)

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

wrong: $(W_NAME)

$(W_NAME) : $(W_OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@


.PHONY: all clean fclean re wrong

