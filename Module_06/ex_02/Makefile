NAME = real

SRCS = realtype.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

CC = clang++
CCFLAGS = -Wall -Wextra -Werror -Wall
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) -o $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re test