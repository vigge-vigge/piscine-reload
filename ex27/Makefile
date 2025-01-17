# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/15 18:51:47 by vakande           #+#    #+#              #
#    Updated: 2025/01/15 20:11:27 by vakande          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = ft_display_file
SRC = main.c
HEAD = header.h
OBJ = $(SRC:.c=.o) 
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
clean:
	@rm -f $(OBJ)
	@echo "object files removed"

fclean:
	@rm -f $(NAME)
	@echo "$(NAME) is deleted"
