# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/18 15:26:38 by rboudwin          #+#    #+#              #
#    Updated: 2024/08/01 15:01:15 by rboudwin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= Zombies
CFLAGS  := -Wextra -Wall -Werror
SRCS	:= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS	:= ${SRCS:.cpp=.o}

all: $(NAME)

%.o: %.cpp
	@c++ $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	@c++ $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: clean fclean all

.PHONY: all, clean, fclean, re