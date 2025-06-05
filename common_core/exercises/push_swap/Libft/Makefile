# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 23:27:35 by jopedro4          #+#    #+#              #
#    Updated: 2025/06/02 18:04:39 by jopedro4         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#compilers and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

#included files
SRCS = ft_isalpha.c 
SRCS += ft_isdigit.c 
SRCS += ft_isalnum.c
SRCS += ft_strlen.c 
SRCS += ft_memset.c 
SRCS += ft_bzero.c 
SRCS += ft_memcpy.c 
SRCS += ft_memmove.c 
SRCS += ft_strlcpy.c
SRCS += ft_toupper.c 
SRCS += ft_tolower.c 
SRCS += ft_strchr.c 
SRCS += ft_strrchr.c
SRCS += ft_strncmp.c 
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_strnstr.c
SRCS += ft_atoi.c
SRCS += ft_strlcat.c
SRCS += ft_calloc.c
SRCS += ft_strdup.c
SRCS += ft_substr.c
SRCS += ft_strjoin.c
SRCS += ft_strtrim.c
SRCS += ft_split.c
SRCS += ft_itoa.c
SRCS += ft_strmapi.c
SRCS += ft_striteri.c
SRCS += ft_putchar_fd.c
SRCS += ft_putstr_fd.c
SRCS += ft_putendl_fd.c
SRCS += ft_putnbr_fd.c
SRCS += ft_isascii.c
SRCS += ft_isprint.c
SRCS += ft_putchar.c
SRCS += ft_putstr.c
SRCS += ft_putstr_count.c
SRCS += ft_putnbr_unsigned.c
SRCS += ft_putnbr_unsigned_count.c
SRCS += ft_putnbrb.c
SRCS += ft_putnbrb_count.c
SRCS += ft_putnbr_count.c
SRCS += ft_putaddress.c
SRCS += ft_putaddress_count.c
SRCS += ft_putnbrlb_count.c
SRCS += ft_printf.c

#bonus files
BONUS = ft_lstnew_bonus.c
BONUS += ft_lstadd_front_bonus.c
BONUS += ft_lstsize_bonus.c 
BONUS += ft_lstlast_bonus.c
BONUS += ft_lstadd_back_bonus.c
BONUS += ft_lstdelone_bonus.c
BONUS += ft_lstclear_bonus.c
BONUS += ft_lstiter_bonus.c
BONUS += ft_lstmap_bonus.c

#Object files, .c files changed to .o
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

#Library name
NAME = libft.a
.BONUS = .bonus
all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -c $(SRCS)
		ar -rcs $@ $^


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME) $(.BONUS)

$(.BONUS): $(BONUS)
		$(CC) $(CFLAGS) -c $(BONUS)
		ar -rcs $(NAME) $(BONUS_OBJS) $(OBJS)
		touch .bonus
clean:
	rm -rf $(OBJS)
	rm -rf $(BONUS_OBJS)
	rm -rf .bonus
fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re bonus

