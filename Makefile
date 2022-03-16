#SETUP
NAME		=	cub3d
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror -g
RM			=	rm -rf
FRAMEWORK	=	-Lmlx -lm -lmlx -framework OpenGL -framework AppKit

#FILES AND PATH
HEADERS_SRC	=	cub3d.h
HEADS		=	$(addprefix includes/, $(HEADERS_SRC))
HEADERS		=	$(HEADS) gnl/get_next_line.h

SRC_SRCS	=	cub3d.c game.c
SRC_DIR		=	sources/
SRC			=	$(addprefix $(SRC_DIR), $(SRC_SRCS))
OBJ			=	$(SRC:.c=.o)

#FUNC_SRCS	=	ft_atoi.c ft_isdigit.c
#FUNC_DIR	=	functions/
#FUNC 		=	$(addprefix $(FUNC_DIR), $(FUNC_SRCS))\
				gnl/get_next_line.c gnl/get_next_line_utils.c
#OBJ_F		=	$(FUNC:.c=.o)

#COMMANDS

$(NAME):		$(OBJ)
				@make -sC mlx/
				$(CC) $(FLAGS) $(OBJ) $(FRAMEWORK) -o $(NAME)
				@echo "$(GREEN)$(NAME) created!$(DEFAULT)"

%.o: %.c $(HEADERS_SRC) Makefile
	$(CC) $(FLAGS) -Imlx -c $< -o $@

all:			$(NAME)

clean:
				@$(RM) $(OBJ)
				@make -C mlx/ clean
				@echo "$(YELLOW)object files deleted!$(DEFAULT)"

fclean:			clean
				@$(RM) $(NAME)
				@echo "$(RED)all deleted!$(DEFAULT)"

re:				fclean all

# .PHONY:		all clean fclean re

#COLORS
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m
