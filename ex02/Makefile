NAME = account

CC = c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

SRCS = \
tests.cpp \
Account.cpp

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# diff:
# 	@sed 's/^\[[^]]*\] //' log.log > log_clean.log
# 	@sed 's/^\[[^]]*\] //' out.log > out_clean.log
# 	@diff log_clean.log out_clean.log
# 	@rm -f log_clean.log out_clean.log

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean diff fclean re