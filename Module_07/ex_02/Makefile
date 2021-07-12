# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/12 11:00:20 by emartin-          #+#    #+#              #
#    Updated: 2021/07/12 11:00:21 by emartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

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