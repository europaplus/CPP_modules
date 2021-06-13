# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/21 14:03:32 by ngarkbit          #+#    #+#              #
#    Updated: 2021/04/03 13:25:03 by knfonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= main.cpp

S_OBJ	= $(SRC:.cpp=.o)

NAME	= ex01

CLANG	= clang++

RM		= rm -f

INCL	= iter.hpp

FLAGS	= -Wall -Wextra -Werror

all: $(NAME)

%.o: %.cpp
	$(CLANG) $(FLAGS) -c $< -o $@

$(NAME): $(S_OBJ) $(INCL)
	$(CLANG) -o $(NAME) $(S_OBJ)

clean:
	@$(RM) $(S_OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
