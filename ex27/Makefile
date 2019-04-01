CC = gcc
NAME	=	ft_display_file
CC		=	gcc
SRC_PATH = srcs
C_FLAGS = -Wall -Werror -Wextra -Iincludes/
C_FILES =	$(SRC_PATH)/ft_display.c
O_FILES = $(C_FILES:.c=.o)

all: $(NAME)

$(NAME): $(O_FILES)
	$(CC) -o $(NAME) $(O_FILES)

%.o: %.c
	$(CC) -o $@ -c $< $(C_FLAGS)

clean:
	/bin/rm -f $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
