# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 16:56:00 by junholee          #+#    #+#              #
#    Updated: 2021/11/16 07:08:23 by junholee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a

SRCS= ft_printf.c ft_sub.c ft_sub2.c ft_sub3.c

ERROR= echo 💥 NO $(file) 💥;

HDR= ft_printf.h

OBJS=$(SRCS:.c=.o)

CC= gcc

CFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	@echo -🧨 COMPILE $(NAME) SUCCESS🧨- 

clean:
	@$(foreach file, $(OBJS), test -f $(file) && rm -v $(file) || $(ERROR))

fclean: clean
	@$(foreach file, $(NAME), test -f $(file) && rm -v $(file) || $(ERROR))

re: fclean all

.PHONY : all clean fclean re