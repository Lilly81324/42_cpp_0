NAME = replace

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp util.cpp
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

run: $(NAME)
	./tester.sh

re: fclean all

.PHONY: all clean fclean run re