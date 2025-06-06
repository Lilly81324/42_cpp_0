NAME = ex02

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./src/main.cpp ./src/Cat.cpp ./src/Dog.cpp ./src/AAnimal.cpp ./src/Brain.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $@
	echo "Compiled \"$(NAME)\" succesfully"

%.o : %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

run: $(NAME)
	valgrind --leak-check=full ./$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all run clean fclean re