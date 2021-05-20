# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emartin- <emartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/10 10:31:57 by emartin-          #+#    #+#              #
#    Updated: 2021/05/20 13:05:59 by emartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME			= Weapons

SRCS			= Weapon.cpp HumanA.cpp HumanB.cpp main.cpp
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