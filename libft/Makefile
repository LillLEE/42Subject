# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 01:14:27 by junholee          #+#    #+#              #
#    Updated: 2021/06/20 17:44:32 by junholee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
RM		=	rm -f
LIB		=	ar crs
CC		=	gcc
CFLAGS		=	-Wall -Wextra -Werror

SRCS		= ft_strlen.c	\
		  ft_strlcpy.c		\
		  ft_strlcat.c		\
		  ft_strchr.c		\
		  ft_strnstr.c		\
		  ft_strncmp.c		\
		  ft_strdup.c		\
		  ft_strrchr.c		\
		  ft_memset.c		\
		  ft_memcpy.c		\
		  ft_memccpy.c		\
		  ft_memmove.c		\
		  ft_memchr.c		\
		  ft_memcmp.c		\
		  ft_bzero.c		\
		  ft_atoi.c		    \
		  ft_calloc.c		\
		  ft_isalnum.c		\
		  ft_isalpha.c		\
		  ft_isascii.c		\
		  ft_isdigit.c		\
		  ft_isprint.c		\
		  ft_strdup.c		\
		  ft_tolower.c		\
		  ft_toupper.c		\
		  ft_substr.c		\
		  ft_strjoin.c		\
		  ft_strtrim.c		\
		  ft_split.c		\
		  ft_strmapi.c		\
		  ft_itoa.c	   	    \
		  ft_putchar_fd.c	\
		  ft_putstr_fd.c	\
		  ft_putendl_fd.c	\
		  ft_putnbr_fd.c	\

SRCS_BONUS	= ft_lstnew.c	\
		  ft_lstsize.c		\
		  ft_lstadd_front.c	\
		  ft_lstadd_back.c	\
		  ft_lstclear.c		\
		  ft_lstlast.c		\
		  ft_lstiter.c		\
		  ft_lstmap.c		\
		  ft_lstdelone.c	\

OBJS		=	$(SRCS:.c=.o)
OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)


ifdef WITH_BONUS
	OBJ_SWITCH = $(OBJS_BONUS) 
else
	OBJ_SWITCH = $(OBJS)
endif

$(NAME)		:	$(OBJ_SWITCH)
			$(LIB) $@ $^

all		:	bonus $(NAME)

clean		:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all

bonus		:
			$(MAKE) WITH_BONUS=1 $(NAME)

.PHONY		:	all clean fclean re bonus
