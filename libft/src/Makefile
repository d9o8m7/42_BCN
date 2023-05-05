# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 18:39:21 by daoliver          #+#    #+#              #
#    Updated: 2023/05/03 15:27:38 by daoliver         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Compiler, Flags & Name Output File
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

## Sources of the functions
SRC = src/ft_atoi.c src/ft_bzero.c src/ft_isalnum.c src/ft_isalpha.c src/ft_isascii.c src/ft_isdigit.c \
	src/ft_isprint.c src/ft_memchr.c src/ft_memcmp.c src/ft_memcpy.c src/ft_memmove.c src/ft_memset.c \
	src/ft_strchr.c src/ft_strdup.c src/ft_strlcat.c src/ft_strlcpy.c src/ft_strlen.c src/ft_strcmp.c \
	src/ft_strnstr.c src/ft_strrchr.c src/ft_strstr.c src/ft_tolower.c src/ft_toupper.c \

OBJS = $(SRC:.c=.o)

## Compiles everithing in one comand
all: $(NAME)

## Create a static library archive file (.a) from compiled object files
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCL) -c $< -o $@

## Cleaning up object files
clean:
	rm -f $(OBJS)

## Cleaning up object files & output file
fclean: clean
	rm -f $(NAME)

## Recompile everithing from scrach
re: fclean all
