#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftaffore <ftaffore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 15:15:50 by ftaffore          #+#    #+#              #
#    Updated: 2015/01/18 16:24:19 by chery            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	test

NAME_C		=	test_cat

NAME_L		=	libfts.a

CC			=	gcc

CC_L		=	~/.brew/bin/nasm -f macho64

RM			=	rm -rf

INCLUDES	=	-Iincludes

LIBS		=	-L. -lfts

CFLAGS		=	-Werror -Wall -Wextra


SRCS_L		=	srcs/ft_bzero.s 		\
				srcs/ft_strcat.s 		\
				srcs/ft_isdigit.s 		\
				srcs/ft_isalpha.s 		\
				srcs/ft_isascii.s 		\
				srcs/ft_isprint.s 		\
				srcs/ft_toupper.s 		\
				srcs/ft_tolower.s 		\
				srcs/ft_puts.s 			\
				srcs/ft_isalnum.s 		\
				srcs/ft_strlen.s 		\
				srcs/ft_memset.s 		\
				srcs/ft_memcpy.s 		\
				srcs/ft_strdup.s 		\
				srcs/ft_cat.s

SRCS		=	test.c

SRCS_C		=	test_cat.c


OBJS_L		=	$(SRCS_L:.s=.o)				
				
OBJS		=	$(SRCS:.c=.o)

OBJS_C		=	$(SRCS_C:.c=.o)

all			:	$(NAME_L) $(NAME) $(NAME_C)

$(NAME_L)	:	$(OBJS_L)
				ar rc $(NAME_L) $(OBJS_L)
				ranlib $(NAME_L)

$(NAME)		:	$(OBJS)
				$(CC) -o $@ $(CFLAGS) $(OBJS) $(LIBS) $(INCLUDES)
				ld -macosx_version_min 10.8.0 -lSystem ./test.o -L./ -lfts -o $(NAME)

$(NAME_C)	:	$(OBJS_C)
				$(CC) -o $@ $(CFLAGS) $(OBJS_C) $(LIBS) $(INCLUDES)
				ld -macosx_version_min 10.8.0 -lSystem ./test_cat.o -L./ -lfts -o $(NAME_C)

.s.o		:
				$(CC_L) $<

.c.o		:
				$(CC) -o $@ $(CFLAGS) $(INCLUDES) -c $<


clean		:
				$(RM) $(OBJS) $(OBJS_L) $(OBJS_C)


fclean		:	clean
				$(RM) $(NAME) $(NAME_L) $(NAME_C)

re			:	fclean all

.PHONY		:	all clean fclean re
