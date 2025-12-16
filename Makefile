# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/08 09:34:52 by tadeyelu          #+#    #+#              #
#    Updated: 2025/12/16 15:28:37 by tadeyelu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
MAKE = make -C
LIBFT_PATH = libft
LIBFT = $(LIBFT_PATH)/libft.a

MANDATORY = ft_printf.c ft_putnbrui_fd.c ft_putnbr_ma.c ft_putnbr_upperhex.c \
			ft_putnbr_lowerhex.c ft_putcharint_fd.c ft_putstrint_fd.c ft_putnbrint_fd.c

SRCS = $(MANDATORY)
OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(MAKE) $(LIBFT_PATH) all
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean: 
	$(MAKE) $(LIBFT_PATH) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) $(LIBFT_PATH) fclean	
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re