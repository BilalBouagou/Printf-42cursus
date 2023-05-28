# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbouagou <bbouagou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 17:12:58 by bbouagou          #+#    #+#              #
#    Updated: 2022/11/03 22:23:51 by bbouagou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = ft_printf.o ft_bzero.o ft_calloc.o ft_itoa.o ft_putchar.o ft_puthex.o\
ft_putnbr.o ft_putptr.o ft_putstr.o ft_strlcpy.o ft_strlen.o ft_itoau.o
DEPS = includes/ft_printf.h

all : $(NAME)

%.o : src/%.c $(DEPS)
	$(CC) $(CFLAGS) -c $<

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re