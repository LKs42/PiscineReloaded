# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lugibone <lugibone@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/01 13:52:41 by lugibone          #+#    #+#              #
#    Updated: 2019/04/01 13:53:16 by lugibone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CCC = gcc -c
CCF = gcc -Wall -Werror -Wextra
SRC = ./srcs/ft_putchar.c \
	  ./srcs/ft_putstr.c \
	  ./srcs/ft_strcmp.c \
	  ./srcs/ft_strlen.c \
	  ./srcs/ft_swap.c
AR = ar rc
INCLUDES = ./includes/

all: $(NAME)

$(NAME):
	@$(CCC) $(SRC) -I $(INCLUDES)
	@$(AR) $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
clean:
	@rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
fclean: clean
	@rm -f $(NAME)
re: fclean all
