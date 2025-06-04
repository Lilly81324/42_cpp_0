NAME = class

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Classmaker.cpp

all: $(NAME)

$(NAME) : $(SRC)
	$(CXX) $(CFLAGS) $(SRC) -o $@
	echo "Compiled \"$(NAME)\" succesfully"

run: $(NAME)
	valgrind --leak-check=full ./$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all run clean fclean re