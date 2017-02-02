# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcone <jamie.cone@piratefish4x4.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/01 12:58:23 by jcone             #+#    #+#              #
#    Updated: 2017/02/01 17:21:30 by jcone            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g
CNAME	= create_advice_link.c create_key_term_link.c initalize_prev_null.c check_term.c initalize_key_term_index.c
HNAME	= advice_ai.h
ONAME	= $(CNAME:.c=.o)
NAME	= Get_your_advice_here
LIB		= libft/libft.a
all: $(NAME)

$(NAME):
	make all -C ./libft
	$(CC) $(CFLAGS) -c $(CNAME) $(HNAME)
	$(CC) $(CFLAGS) main.c $(ONAME) $(LIB)
	mv a.out $(NAME)

re: fclean all

clean:
	make clean -C ./libft
	rm -f $(ONAME)

fclean: clean
	make fclean -C ./libft
	rm -f $(NAME);
	rm -f $(HNAME).gch
