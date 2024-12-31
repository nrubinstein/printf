# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 14:57:42 by nrubinst          #+#    #+#              #
#    Updated: 2024/12/18 14:02:15 by nrubinst         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra -g
CCOMP = -c

NAME = libft.a

SRCfiles =	ft_isalpha.c ft_calloc.c \
			ft_isdigit.c ft_isalnum.c \
			ft_toupper.c ft_tolower.c \
			ft_substr.c ft_strtrim.c \
			ft_strrchr.c ft_strnstr.c \
			ft_strncmp.c ft_strlen.c \
			ft_strlcpy.c ft_strlcat.c \
			ft_strjoin.c ft_strdup.c \
			ft_strchr.c ft_memset.c \
			ft_memmove.c ft_memcpy.c \
			ft_memcmp.c ft_memchr.c \
			ft_isprint.c ft_isascii.c \
			ft_atoi.c ft_bzero.c \
			ft_split.c ft_strmapi.c \
			ft_striteri.c ft_putnbr_fd.c \
			ft_putendl_fd.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_itoa.c \
			ft_lstnew.c ft_lstadd_front.c \
			ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c \
			ft_lstiter.c ft_lstclear.c \
			ft_lstmap.c
			
OBJfiles = $(SRCfiles:.c=.o)

all: $(NAME)

$(NAME): $(OBJfiles)
	ar -rcs $@ $^ 

%.o: %.c
	$(CC) $(CFLAGS) $(CCOMP) $< -o $@

clean:
	rm -f $(OBJfiles) 

fclean: clean
	rm -f $(NAME)
	
re: fclean all
