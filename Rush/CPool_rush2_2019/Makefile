##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile rush2
##

NAME	=	rush2

SRC		=	src/error_handling.c \
			src/my_strlen.c \
			src/my_put_nbr.c \
			src/my_putstr.c \
			src/my_putchar.c \
			src/verif_switch_char.c \
			src/find_country.c \
			src/display.c \
			src/rush2.c \
			main.c

CC		?=	gcc

CPPFLAGS	=	-I./include/

HEADER	=	my.h

CFLAGS	=	-W -Wall

DEFLAGS	=	-W -Wextra -Wall -g3

OBJ		=	$(SRC:.c=.o)

all:	$(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

debug:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all debug clean fclean re