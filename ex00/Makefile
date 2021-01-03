# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/03 16:36:37 by msafflow          #+#    #+#              #
#    Updated: 2021/01/03 17:11:05 by msafflow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= megaphone.cpp
OBJS		= $(SRCS:.cpp=.o)
CXX			= clang++
FLAGS		= -Wall -Wextra -Werror -I.
NAME		= megaphone

all:		$(NAME)
$(NAME):	$(OBJS)
			$(CXX) $(FLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

test:		$(NAME)
			./megaphone "shhhhh... I think the students are asleep..."
			./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
			./megaphone

.PHONY:		all clean fclean re test