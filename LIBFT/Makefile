
## Name Output File, Compiler & Flags
CC:= gcc
CFLAGS:= -Wall -Wextra -Werror -I .
NAME:= libft.a

## Sources of Functions
SRC:= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	  ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
	  ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	  ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

OBJS:= $(SRC:.c=.o)
$(info $(SRC))

## Compiles everything in one comand
all: $(NAME)

## Create a static library archive file (.a) from compiled object files
$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

## Compiles .c file into its .o for creating the final library archive 
%.o: %.c libft.h Makefile
		$(CC) $(CFLAGS) -c $< -o $@

## Cleaning up object files
clean:
		rm -f $(OBJS)
fclean: clean
		rm -f $(NAME)

## Recompile everything from scratch
re: fclean all

.PHONY: all clean fclean re
