# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/21 14:03:32 by ngarkbit          #+#    #+#              #
#    Updated: 2021/03/16 17:58:26 by knfonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS := ./srcs/

SRC =	$(addprefix $(SRCS), ClassContact.cpp PhoneBook.cpp)

S_OBJ = $(SRC:.cpp=.o)

CLANG = clang++

RM = rm -f

INCS_DIR = includes/Contact.hpp

INCLUDE = -I$(INCS_DIR)

FLAGS = -Wall -Wextra -Werror $(INCLUDE)

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
