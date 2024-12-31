# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 14:57:42 by nrubinst          #+#    #+#              #
#    Updated: 2024/12/31 13:31:18 by nrubinst         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_PATH = ./libft
LIB_BUILD = $(LIB_PATH)/libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra -g -I$(LIB_PATH) -I.
CCOMP = -c

NAME = libftprintf.a 

SRCfiles =	ft_printf.c ft_putchar_pf.c \
			ft_putnbr_pf.c ft_putstr_pf.c \
			ft_putpointer.c ft_convert_num_to_hex.c \
			ft_putunsigned_pf.c ft_putsign.c 

OBJfiles = $(SRCfiles:.c=.o)

all: $(NAME)

$(NAME): $(LIB_BUILD) $(OBJfiles)
	cp $(LIB_BUILD) $(NAME)
	ar -rcs $@ $^ 

$(LIB_BUILD):
	$(MAKE) -C $(LIB_PATH)
	
%.o: %.c
	$(CC) $(CFLAGS) -g $(CCOMP) $< -o $@

clean:
	rm -f $(OBJfiles)
	$(MAKE) -C $(LIB_PATH) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIB_PATH) fclean
	
re: fclean all

.PHONY: all clean fclean re
