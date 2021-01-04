# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msafflow <elegija4mlg@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/03 17:28:37 by msafflow          #+#    #+#              #
#    Updated: 2021/01/04 22:38:07 by msafflow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp ClassPhonebook.cpp ClassContact.cpp
OBJS		= $(SRCS:.cpp=.o)
CXX			= clang++
FLAGS		= -Wall -Wextra -Werror -I.
NAME		= phonebook

all:		$(NAME)
$(NAME):	$(OBJS)
			$(CXX) $(FLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re