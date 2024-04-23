# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: valarcon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 10:11:58 by valarcon          #+#    #+#              #
#    Updated: 2022/05/09 10:17:02 by valarcon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

CFLAGS = -Werror -Wall -Wextra

OBJS := $(*.o)

SRC = ft_atoi.c ft_isalpha.c ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_tolower.c \
ft_bzero.c ft_isascii.c ft_memccpy.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strrchr.c ft_toupper.c \
ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c \
ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strlcat.c ft_strncmp.c ft_substr.c ft_dec_to_hex.c \
ft_putaddr_fd.c ft_putunbr_fd.c ft_realloc.c ft_inset.c ft_abs.c

PRINTFSRC = ./printf/putter/ft_putchar.c ./printf/putter/ft_putint.c ./printf/putter/ft_putstr.c ./printf/putter/ft_putuint.c \
./printf/putter/ft_put_hex.c ./printf/ft_printf.c ./printf/ft_available_types.c

GNLSRC = ./gnl/get_next_line.c

all: $(NAME)

${NAME}:
	${CC} ${CFLAGS} -c ${SRC} ${PRINTFSRC} ${GNLSRC} ${BNS}
	ar rc ${NAME} *.o

clean:
		rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: clean ${NAME}
