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

NAME_L		=	libfts.a

CC			=	gcc

CC_L		=	~/.brew/bin/nasm -f macho64

RM			=	rm -rf

INCLUDES	=	-Iincludes

LIBS		=	-L. -lfts

CFLAGS		=	-Werror -Wall -Wextra


SRCS_L		=	srcs/ft_bzero.s 		\
				srcs/ft_isdigit.s 		\
				srcs/ft_isalpha.s 		\
				srcs/ft_isalnum.s

SRCS		=	main.c


OBJS_L		=	$(SRCS_L:.s=.o)				
				
OBJS		=	$(SRCS:.c=.o)


all			:	$(NAME_L) $(NAME)

$(NAME_L)	:	$(OBJS_L)
				ar rc $(NAME_L) $(OBJS_L)
				ranlib $(NAME_L)

$(NAME)		:	$(OBJS)
				$(CC) -o $@ $(CFLAGS) $(OBJS) $(LIBS) $(INCLUDES)

.s.o		:
				$(CC_L) $<

.c.o		:
				$(CC) -o $@ $(CFLAGS) $(INCLUDES) -c $<


clean		:
				$(RM) $(OBJS) $(OBJS_L)


fclean		:	clean
				$(RM) $(NAME) $(NAME_L)

re			:	fclean all

.PHONY		:	all clean fclean re
