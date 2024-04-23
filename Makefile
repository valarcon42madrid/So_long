# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: valarcon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/08 12:31:59 by valarcon          #+#    #+#              #
#    Updated: 2022/05/10 10:47:57 by valarcon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = so_long

LIBFTNAME = libft.a

CFLAGS = -Werror -Wall -Wextra

MINILIBX = -I /usr/X11/include -g -L /usr/X11/lib -l mlx -framework OpenGL -framework AppKit

OBJS := $(*.o)

SRC = main.c

MAPTOOLS = ./map/ft_get_map.c ./map/ft_check_map_file.c ./map/ft_map_validation_helpers.c \
./map/ft_aux_check_map_file.c

RENDERSRC = ./render/setup_hooks.c ./render/ft_control_player.c ./render/ft_keycode_action.c ./render/ft_render_basic.c \
./render/ft_aux_window.c ./render/ft_aux_logic.c ./render/ft_put_img.c ./render/ft_images.c ./render/ft_character.c \
./render/ft_trees.c ./render/ft_aux_render.c ./render/ft_game_over.c

LIBFTPATH = ./libft/

all: $(NAME)

${NAME}:
	make -C ${LIBFTPATH}
	mv $(LIBFTPATH)${LIBFTNAME} ${LIBFTNAME}
	${CC} ${CFLAGS} ${SRC} $(MAPTOOLS) ${RENDERSRC} ${LIBFTNAME} ${MINILIBX} -o ${NAME}

clean:
	rm -rf *.o

fclean: clean
	rm -f $(LIBFTNAME) ${OBJS} $(NAME)
	rm -rf so_long.dSYM

re: fclean ${NAME}
