# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/05 10:30:30 by rboudwin          #+#    #+#              #
#    Updated: 2024/08/14 11:40:59 by rboudwin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= Harl
CFLAGS  := -Wextra -Wall -Werror
SRCS	:= main.cpp Harl.cpp
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