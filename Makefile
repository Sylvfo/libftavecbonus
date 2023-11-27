# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 10:50:32 by sforster          #+#    #+#              #
#    Updated: 2023/11/06 17:18:58 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c\
			ft_isascii.c	ft_isprint.c	ft_strlen.c	ft_memset.c\
			ft_bzero.c	ft_memcpy.c	ft_memmove.c	ft_strlcpy.c\
			ft_strlcat.c	ft_toupper.c	ft_tolower.c	ft_strchr.c\
			ft_strrchr.c	ft_strncmp.c	ft_memcmp.c	ft_strnstr.c\
			ft_atoi.c	ft_calloc.c	ft_strdup.c	ft_memchr.c	ft_memcmp.c\
			ft_strjoin.c	ft_strtrim.c	ft_split.c	ft_itoa.c\
			ft_substr.c	ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c\
			ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c
NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

OBJ		=	$(SRCS:.c=.o)

all:	$(NAME)

re:		fclean $(NAME)

$(NAME):	$(OBJ)
				ar	rcs	$(NAME)	$(OBJ)
				ranlib $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)

.PHONY:		all re clean fclean bin
