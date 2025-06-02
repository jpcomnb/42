# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/28 18:00:43 by jopedro4          #+#    #+#              #
#    Updated: 2025/05/31 20:53:38 by jopedro4         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc -Wall -Werror -Wextra

SRCS = ft_printf.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

NAME2 = ./Libft/libft.a

LIBFT = Libft

HEADER = -I./Libft

all: $(NAME2) $(NAME)

$(NAME): $(OBJS)
	cp $(NAME2) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) -c $(SRCS) -o $(OBJS)

$(NAME2):
	make -C $(LIBFT)
	make -C $(LIBFT) bonus

clean:
	rm -rf $(OBJS)
	make -C $(LIBFT) clean 

fclean: clean
	rm -rf $(NAME)
	make -C $(LIBFT) fclean

re: fclean all

.PHONY: all clean fclean re
