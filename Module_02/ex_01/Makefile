# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/10 10:31:57 by emartin-          #+#    #+#              #
#    Updated: 2021/05/31 10:37:58 by emartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME			= Fixed

SRCS			= Fixed.cpp  main.cpp
OBJS			= $(SRCS:.cpp=.o)

CC				= clang++ 

RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.


all:			$(NAME)

$(NAME):		$(OBJS)
				${CC} ${CFLAGS} -o ${NAME} ${OBJS} ${LIBS}

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re