# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/15 17:53:08 by vakande           #+#    #+#              #
#    Updated: 2025/01/15 19:35:59 by vakande          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"

FILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEAD = includes/

all : $(NAME)

$(NAME) :
		gcc -I=./$(HEAD) -c $(FILES)
		ar rc $(NAME) $(OBJ)

clean :
		/bin/rm -f $(OBJ)

fclean : clean
		/bin/rm -f $(NAME)

re : fclean all
