# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 11:25:55 by nsantand          #+#    #+#              #
#    Updated: 2026/08/14 16:42:34 by nsantand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED       = \033[1;31m
GREEN     = \033[1;32m
BLUE      = \033[1;34m
CYAN      = \033[1;36m
DEF_COLOR = \033[0;39m

NAME     := animal
CXX      := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRC := main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(CYAN)C++ compiled$(DEF_COLOR) 🇵🇪"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "$(RED)All object files erased!$(DEF_COLOR) 🇵🇪"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re