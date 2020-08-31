##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

LIB	=	./lib/my/

SOURCE	=	./src/

SRC	=	main.c

CC		=	gcc

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

NAME		=	test_lib

CPPFLAGS	=	-I ./include

CFLAGS		=	-Wall -Wextra

LDFLAGS	=	-L lib/my -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C $(LIB)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)
	make clean -C $(LIB)

fclean: clean
	make fclean -C $(LIB)

re:	fclean all

.PHONY: all clean fclean re
