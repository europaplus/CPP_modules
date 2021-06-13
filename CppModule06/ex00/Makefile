# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/21 14:03:32 by ngarkbit          #+#    #+#              #
#    Updated: 2021/04/05 12:26:49 by knfonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp Convert.cpp

S_OBJ = $(SRC:.cpp=.o)

NAME = convert

CLANG = clang++

RM = rm -f

INC		= Convert.hpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.cpp
	$(CLANG) $(FLAGS) -c $< -o $@

$(NAME): $(S_OBJ) $(INC)
	$(CLANG) -o $(NAME) $(S_OBJ)

clean:
	@$(RM) $(S_OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
