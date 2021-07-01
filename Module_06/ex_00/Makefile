NAME = scalarConversion

SRCS = main.cpp convers.cpp
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

test:	$(NAME)
		./scalarConversion 0
		./scalarConversion 42
		./scalarConversion 42.
		./scalarConversion 42.f
		./scalarConversion nan
		./scalarConversion nanf
		./scalarConversion inf
		./scalarConversion inff
		./scalarConversion +inf
		./scalarConversion +inff
		./scalarConversion -inf
		./scalarConversion -inff
		./scalarConversion 2147483647
		./scalarConversion 2147483648
		./scalarConversion -2147483648
		./scalarConversion -2147483649
		./scalarConversion 2147483647.f
		./scalarConversion 2147483648.f
		./scalarConversion -2147483648.f
		./scalarConversion -2147483649.f
		./scalarConversion 2147483647.
		./scalarConversion 2147483648.
		./scalarConversion -2147483648.
		./scalarConversion -2147483649.
		./scalarConversion a
		./scalarConversion B
		./scalarConversion "~"
		./scalarConversion 126
		./scalarConversion test
		./scalarConversion 58
		./scalarConversion 101
		./scalarConversion 457846
		./scalarConversion 12544.545f
		./scalarConversion 54178652.41784187
		./scalarConversion 0e0
		./scalarConversion 0e+0
		./scalarConversion 0e-0
		./scalarConversion 0.5e-0
		./scalarConversion 454874.5e-0
		./scalarConversion 454874.5e-21
		./scalarConversion 454874.5e+21
		./scalarConversion 3.40282e+38
		./scalarConversion 3.5e+38
		./scalarConversion 1.17549e-38
		./scalarConversion 1.2e-38
		./scalarConversion -1.17549e38
		./scalarConversion -1.2e38
		./scalarConversion 0e0f
		./scalarConversion 0e+0f
		./scalarConversion 0e-0f
		./scalarConversion 0.5e-0f
		./scalarConversion 454874.5e-0f
		./scalarConversion 454874.5e-21f
		./scalarConversion 454874.5e+21f
		./scalarConversion 3.40282e+38f
		./scalarConversion 3.5e+38f
		./scalarConversion 1.17549e-38f
		./scalarConversion 1.2e-38f
		./scalarConversion -1.17549e38f
		./scalarConversion -1.2e38f

.PHONY: all clean fclean re test