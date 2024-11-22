# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rprocopi <mailto:rprocopi@student.42lis    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 13:39:06 by rprocopi          #+#    #+#              #
#    Updated: 2024/11/22 17:02:20 by rprocopi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		whatever

SOURCE		= 		main.cpp 

OBJECT		=		$(SOURCE:.cpp=.o)

COMPILE		=		c++

FLAGS		=		-Wall -Wextra -Werror -std=c++98

RESET		=		\033[0m
GREEN		= 		\033[38;5;46m

all: $(NAME)

$(NAME): $(OBJECT)
	@echo "$(GREEN)-----------------------------------"
	@$(COMPILE) $(FLAGS) $(OBJECT) -o $(NAME)
	@echo "$(GREEN)$(NAME)........... compile successfully!"
	@echo "Executable                   ./$(NAME) $(RESET)"
	
%.o: %.cpp
	$(COMPILE) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECT)
	@echo "Object file removed!"
	
fclean: clean
	rm -f $(NAME)
	@echo "Executable removed!"

re: fclean all

.PHONY: all clean fclean re