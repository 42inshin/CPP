NAME	=	Account

CXX		=	c++
CXXFLAG	=	-Wall -Wextra -Werror -std=c++98
SRC		=	Account.cpp tests.cpp
OBJ		=	$(SRC:.cpp=.o)

$(NAME):
	$(CXX) $(CXXFLAG) $(SRC) -o $@

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

re: clean all

.PHONY: $(NAME) all clean re
