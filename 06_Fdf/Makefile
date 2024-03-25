NAME 		= fdf
MLX 		= libmlx_Linux.a
LIBFT 		= libft.a

LFT_PATH 	= ./libft/
MLX_PATH 	= ./mlx_linux/
INCLUDES 	= ./include
SRCDIR 		= ./srcs/

SRC_FILE 	= main.c \
					close.c \
					color.c \
					draw.c \
					error.c \
					init_utils.c \
					init.c \
					key_handle.c \
					menu.c \
					project.c \
					read.c \
					render.c \
					rotate.c \
					transform.c \
					utils.c

OBJ= $(SRC_FILE:.c=.o)

#compilation
CF 			= -Wall -Wextra -Werror
CC 			= clang
MLX_CF 		= -lm -lbsd -lmlx -lXext -lX11
CFI 		= -I$(INCLUDES)

#common commands
RM =rm -f

#rules
all: $(NAME)

$(NAME): $(OBJ) $(LIBFT) $(MLX)
	@printf "\n$(CY)Generating FdF executable...$(RC)\n"
	$(CC) $(CF) -o $(NAME) $(OBJ) -L $(LFT_PATH) -L $(MLX_PATH) -lft $(MLX_CF)
	mkdir objs
	mv $(OBJ) objs/
	@printf "$(GR)Done!$(RC)\n\n"

$(OBJ): $(SRC)
	@printf "\n$(CY)Compiling source files...$(RC)\n"
	$(CC) $(CF) -c -I ./includes/ $(SRC)
	@printf "$(GR)Objects ready!$(RC)\n\n"

$(MLX):
	@printf "\n$(CY)Generating MiniLibX...$(RC)\n"
	@make -C $(MLX_PATH)
	@printf "$(GR)MiniLibX created!$(RC)\n\n"

$(LIBFT):
	@printf "\n$(GR)Generating Libft...$(RC)\n"
	@make -C $(LFT_PATH)
	@printf "$(GR)Libft created!$(RC)\n\n"

bonus: all

re: fclean all

rebonus: fclean bonus

clean:
	@printf "\n$(YE)Cleaning all object files from libft...$(RC)\n"
	@make clean -C $(LFT_PATH)
	@printf "$(GR)Libft objects removed!$(RC)\n\n"
	$(RM) -rf $(OBJ) $(BONUS_OBJ) objs/

fclean: clean
	@printf "\n$(YE)Cleaning all additional objects and libraries...$(RC)\n"
	$(RM) -rf $(NAME) $(BONUS_OBJ) objs/
	@make fclean -C $(LFT_PATH)
	@make clean -C $(MLX_PATH)
	@printf "$(GR)All libraries removed!$(RC)\n\n"
	make cleanleaks


.PHONY: clean fclean re rebonus all bonus

# Colors
GR	= \033[32;1m
RE	= \033[31;1m
YE	= \033[33;1m
CY	= \033[36;1m
RC	= \033[0m