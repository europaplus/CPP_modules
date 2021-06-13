# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/21 14:03:32 by ngarkbit          #+#    #+#              #
#    Updated: 2021/03/16 17:58:41 by knfonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	megaphone.cpp

S_OBJ = $(SRC:.cpp=.o)

NAME = megaphone

CLANG = clang++

RM = rm -f

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	@$(CLANG) $(FLAGS) $< -o $@

$(NAME): $(S_OBJ)
	@$(CLANG) -o $(NAME) $(S_OBJ)

clean:
	@$(RM) $(S_OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
