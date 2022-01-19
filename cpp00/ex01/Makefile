NAME	=	PhoneBook

CXX		=	c++
CXXFLAG	=	-Wall -Wextra -Werror -std=c++98
SRC		=	PhoneBook.cpp main.cpp
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
