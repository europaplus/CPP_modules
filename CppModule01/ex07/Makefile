# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/17 13:10:14 by knfonda           #+#    #+#              #
#    Updated: 2021/03/18 18:48:01 by knfonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= replace

SRCS	:= ./srcs/

SRC		= main.cpp

S_OBJ	= $(SRC:.cpp=.o)

CLANG	= clang++

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror

%.o: %.c
	@$(CLANG) $(FLAGS) -c $< -o $@

$(NAME): $(S_OBJ)
	@$(CLANG) -o $(NAME) $(FLAGS) $(S_OBJ)

all: $(NAME)

clean:
	@$(RM) $(S_OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all