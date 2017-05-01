##
## Makefile for makefie in /home/nicolas94200/PSU_2016_my_sokoban
## 
## Made by goedert nicolas
## Login   <nicolas94200@epitech.net>
## 
## Started on  Mon Dec 12 08:31:19 2016 goedert nicolas
## Last update Thu Dec 15 08:48:16 2016 goedert nicolas
##

NAME	=	my_sokoban

SRC	=	main.c	\
		localised.c	\
		wordtab.c	\
		move3.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

RM	=	rm -rf

CFLAGS	=	-lncurses -I./include

all	:	$(NAME) clean

$(NAME)	:	$(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

".PHONY	: all clean fclean re
