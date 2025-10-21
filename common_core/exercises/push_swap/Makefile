# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/25 21:11:35 by jopedro4          #+#    #+#              #
#    Updated: 2025/10/21 19:23:12 by jopedro4         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc -Wall -Werror -Wextra -g

#commands
SRCS = ./commands/push_swap_commands_push.c
SRCS += ./commands/push_swap_commands_reverse_rotate.c
SRCS += ./commands/push_swap_commands_rotate.c
SRCS += ./commands/push_swap_commands_swap.c
SRCS += ./commands/push_swap_commands_utils.c
#errors
SRCS += ./errors/ft_check_string.c
SRCS += ./errors/push_swap_error.c
#main
SRCS += ./main/check_duplicate.c
SRCS += ./main/ft_initialize_stack.c
SRCS += ./main/ft_sort_small.c
SRCS += ./main/push_swap.c
#utils
SRCS += ./utils/a_to_b.c
SRCS += ./utils/b_to_a.c
SRCS += ./utils/complete_list_a.c
SRCS += ./utils/complete_list_b.c
SRCS += ./utils/find_cheapest.c
SRCS += ./utils/ft_atoi.c
SRCS += ./utils/ft_atol.c
SRCS += ./utils/ft_bzero.c
SRCS += ./utils/ft_calloc.c
SRCS += ./utils/ft_isdigit.c
SRCS += ./utils/ft_lst_highest.c
SRCS += ./utils/ft_lstsize.c
SRCS += ./utils/ft_lst_smallest.c
SRCS += ./utils/ft_ltoi.c
SRCS += ./utils/ft_split.c
SRCS += ./utils/ft_strdup.c
SRCS += ./utils/ft_substr.c
SRCS += ./utils/min_to_top.c
SRCS += ./utils/prep_push.c
SRCS += ./utils/push_swap_utils.c



OBJS = $(SRCS:.c=.o)

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) -c $< -o $@


clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
