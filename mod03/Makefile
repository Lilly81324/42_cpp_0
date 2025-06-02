NAME = ex0

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./src/main.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@
	@echo "Compiled \"$(NAME)\""

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

run: $(NAME)
	valgrind --leak-check=full ./$(NAME)

re: fclean all

.PHONY: all clean fclean run re