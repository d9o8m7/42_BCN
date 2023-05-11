# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 18:39:21 by daoliver          #+#    #+#              #
#    Updated: 2023/05/11 12:17:40 by daoliver         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Name Output File, Compiler & Flags
CC:= gcc
CFLAGS:= -Wall -Wextra -Werror -I .
NAME:= libft.a

## Sources of Functions
SRC:= src/ft_bzero.c src/ft_isalnum.c src/ft_isalpha.c src/ft_isascii.c src/ft_isdigit.c \
	  src/ft_isprint.c src/ft_memchr.c src/ft_memcmp.c src/ft_strlcat.c src/ft_strlen.c \
	  src/ft_memcpy.c src/ft_memmove.c src/ft_memset.c src/ft_strnstr.c src/ft_tolower.c \
	  src/ft_toupper.c \

OBJS:= $(SRC:.c=.o)
$(info $(SRC))

## Compiles everything in one comand
all: $(NAME)

## Create a static library archive file (.a) from compiled object files
$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

## Pattern rule for invoking flag, prerequisite and target
%.o: %.c libft.h Makefile
		$(CC) $(CFLAGS) -c $< -o $@

## Cleaning up object files
clean:
		rm -f $(OBJS)
fclean: clean
		rm -f $(NAME)

## Recompile everything from scratch
re: fclean all
