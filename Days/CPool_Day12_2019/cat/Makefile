##
## EPITECH PROJECT, 2019
## makefile
## File description:
## day12
##

NAME 	=	cat

SRC	=	src/my_putchar.c \
		src/my_putstr.c \
		cat.c

CC	=	gcc

CPPFLAGS	=	-I./include/

CFLAGS	=	-W -Wall

DEFLAGS	=	-W -Wextra -Wall -g3

OBJ	=	$(SRC:.c=.o)

all: $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

debug: $(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all debug clean fclean re
