# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/12 11:00:23 by emartin-          #+#    #+#              #
#    Updated: 2021/07/12 11:00:24 by emartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRCS = main.cpp
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