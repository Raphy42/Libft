# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 16:45:12 by rdantzer          #+#    #+#              #
#    Updated: 2014/11/17 16:09:46 by rdantzer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

## Sources
SRC= ft_strlen.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
	 ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_atoi.c ft_itoa.c \
	 ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isspace.c \
	 ft_strclr.c ft_strnew.c ft_memalloc.c ft_memset.c ft_toupper.c ft_tolower.c \
	 ft_tolower.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_strcpy.c ft_strncpy.c \
	 ft_strncat.c ft_strcat.c ft_strdup.c ft_strcmp.c ft_strncmp.c ft_strchr.c \
	 ft_strrchr.c ft_memdel.c ft_strdel.c ft_memchr.c ft_memcmp.c ft_strstr.c \
	 ft_strnstr.c ft_striter.c ft_striteri.c ft_strsub.c ft_strjoin.c ft_strmap.c \
	 ft_strmapi.c ft_strequ.c ft_strsub.c ft_strlcat.c ft_memmove.c ft_strnequ.c \
	 ft_strtrim.c ft_strsplit.c \
	 ft_lstnew.c ft_lstdelone.c ft_lstdel.c

## Outputs
OBJ= $(SRC:.c=.o)

## Commands
CC= gcc
AR= ar

## Options
CFLAGS= -Wall -Werror -Wextra

## Aesthetics
RED= \033[31m
GREEN= \033[32m
RESET= \033[0m

.PHONY: clean fclean re

all: $(NAME)

$(NAME):
	@printf "$(RED)Compiling sources...$(RESET)\t\t"
	@$(CC) $(CFLAGS) -c $(SRC)
	@printf "$(GREEN)Done$(RESET)\n"
	@printf "$(RED)Creating static library...$(RESET)\t"
	@$(AR) -rcs $(NAME) $(OBJ)
	@printf "$(GREEN)Done$(RESET)\n"
	@printf "$(RED)Cleaning directory...$(RESET)\t\t"
	@rm -f $(OBJ)
	@printf "$(GREEN)Done$(RESET)\n"

clean:
	@printf "$(RED)Removing objects...$(RESET)\t\t"
	@rm -f $(OBJ)
	@printf "$(GREEN)Done$(RESET)\n"

fclean: clean
	@printf "$(RED)Removing static library...$(RESET)\t"
	@rm -f $(NAME)
	@printf "$(GREEN)Done$(RESET)\n"

re: fclean all
