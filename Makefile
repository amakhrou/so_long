# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 17:04:51 by amakhrou          #+#    #+#              #
#    Updated: 2023/05/19 15:01:14 by amakhrou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror -I headers/
SRCS = bercheck.c display.c element.c freeall.c ft_strlen.c get_next_line.c get_next_line_utils.c jnab.c keys.c moves.c mrb3a.c passmap.c \
		 read.c so_long.c tol3rd.c tri9_m9ada.c updown.c valid.c moves2.c putnbr.c ft_putstr_fd.c victory.c split.c player.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC)	$(OBJS) -lmlx -framework OpenGL -framework AppKit -o $(NAME)
clean :
			@rm -rf $(OBJS)
fclean :	clean
			@rm -f $(NAME)				
re :	fclean all