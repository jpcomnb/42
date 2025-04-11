# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 23:27:35 by jopedro4          #+#    #+#              #
#    Updated: 2025/04/12 00:14:57 by jopedro4         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#compilers and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

#included files
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c

#Object files, .c files changed to .o
OBJS = $(SRCS:.c=.o)

#Library name
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
		ar -rcs $@ $^

%.o: %.c libft.h
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
