# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 15:26:33 by edesanta          #+#    #+#              #
#    Updated: 2023/10/14 15:26:33 by edesanta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = clang
CFLAGS = -Wall -Wextra -Werror
HEADER = libft.h
FUNCTIONS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memset.c ft_strchr.c ft_strlen.c ft_strncmp.c \
ft_strrchr.c ft_tolower.c ft_toupper.c ft_memcpy.c ft_memmove.c ft_memchr.c \
ft_memcmp.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c \
ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putstr_fd.c \
ft_putnbr_fd.c ft_strjoin.c ft_strncmp.c  ft_lstnew.c \
ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJECTS = $(FUNCTIONS:%.c=%.o)
$(NAME): $(OBJECTS) $(HEADER)
		ar -rcs $(NAME) $(OBJECTS)

all:	$(NAME) clean

clean:
		rm -rf $(OBJECTS)
		rm -rf ./a.out

fclean: clean
		rm -rf $(NAME)

re:		fclean all

.PHONY: all clean fclean re
