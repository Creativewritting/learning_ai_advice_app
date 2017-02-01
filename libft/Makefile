#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcone <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/31 09:55:24 by jcone             #+#    #+#              #
#    Updated: 2017/01/26 14:00:59 by jcone            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
CNAME = ft_malloc_array_inner.c ft_charcount_int.c ft_lstmap.c ft_lstiter.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstnew.c ft_itoa.c ft_sepvalcon.c ft_strlenc.c ft_strsplit.c ft_strtrim.c ft_strjoin.c ft_segfault.c ft_strsub.c ft_strmapi.c ft_strmap.c ft_striteri.c ft_striter.c ft_strdel.c ft_strnew.c ft_strdup.c ft_memdel.c ft_memalloc.c ft_strnstr.c ft_strstr.c ft_strlcat.c ft_strncat.c ft_strcat.c ft_strrchr.c ft_strchr.c ft_memchr.c ft_memmove.c ft_memccpy.c ft_memcpy.c ft_memcmp.c ft_bzero.c ft_memset.c ft_strlen.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putchar_fd.c ft_strncpy.c ft_strnequ.c ft_strncmp.c ft_strequ.c ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c  ft_isprint.c ft_tolower.c ft_toupper.c ft_strcpy.c ft_putchar.c ft_putstr.c ft_atoi.c ft_putnbr.c ft_strcmp.c ft_putendl.c ft_strclr.c ft_lstremoveone.c ft_lstexpandif.c get_next_line.c
HNAME = libft.h
ONAME = $(CNAME:.c=.o)
all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(CNAME) $(HNAME)
	ar rc $(NAME) $(ONAME)

re: fclean all

clean:
	rm -f $(ONAME)

fclean: clean
	rm -f $(NAME)
	rm -f libft.h.gch

