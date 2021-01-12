# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmarei <tmarei@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 20:12:12 by tmarei            #+#    #+#              #
#    Updated: 2021/01/12 20:05:20 by tmarei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Directories, names, cflags etc #
OBJDIR = obj
SRCDIR = src
NAME = libft.a
HEADER = libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

# OBJ & SRC files #
OBJ = $(SRC:.c=.o)
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
	  ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
	  ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
	  ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	  ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
	  ft_tolower.c ft_toupper.c

# rules #
all:
	@mv ./includes/$(HEADER) $(SRCDIR); cd $(SRCDIR); $(CC) -c $(SRC); ar rc $(NAME) $(OBJ); \
	mv $(HEADER) ../includes; mv $(NAME) ..; mkdir ../obj; mv $(OBJ) ../obj

clean:
	@rm -rf obj

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
