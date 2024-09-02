# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davvaler <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/29 11:40:41 by davvaler          #+#    #+#              #
#    Updated: 2024/08/29 12:12:06 by davvaler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -rf

SOURCES =	srcs/ft_putchar.c \
			srcs/ft_swap.c \
			srcs/ft_putstr.c \
			srcs/ft_strlen.c \
			srcs/ft_strcmp.c \

OBJECTS = $(sources:.c=0)

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(AR) $@ $(OBJECTS)
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
clean:
	@$(RM) $(OBJECTS)
fclean: clean
	@$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
