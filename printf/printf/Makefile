# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 19:08:40 by jschuste          #+#    #+#              #
#    Updated: 2025/05/06 21:18:44 by jschuste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -c
#INCLUDES = -Ilibft/

SRCS = src/ft_printf.c \
		src/ft_print_char.c \
		src/ft_print_string.c \
		src/ft_print_ptr.c \
		src/ft_print_int.c \
		src/ft_print_unsigned.c \
		src/ft_print_hex.c

OBJS = $(SRCS:.c=.o)

# Archive command
AR = ar rcs

# Build rule
all: $(NAME)

$(NAME): $(OBJS)
		@$(AR) $(NAME) $(OBJS)
		@echo "libftprintf.a created"

# Object file generation
%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@
# $(INCLUDES)
clean:
	rm -f $(OBJS)
	@echo "Object files removed"
fclean: clean
	rm -f $(NAME)
	@echo "libftprintf.a removed"

re: fclean all

.PHONY: all clean fclean re
