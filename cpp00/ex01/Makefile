NAME	=	PhoneBook

CC		=	clang++
CFLAG	=	-Wall -Wextra -Werror
SRC		=	PhoneBook.cpp

$(NAME):
	$(CC) $(CFLAG) $(SRC) -o $@

all: $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: $(NAME) all clean re
