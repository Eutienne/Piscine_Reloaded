# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: eutrodri <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/12 23:26:07 by eutrodri      #+#    #+#                  #
#    Updated: 2019/01/13 08:53:25 by eutrodri      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c  srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

INCLUDES = includes/*.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) $(SRCS) -I $(INCLUDES)
	ar -rc  $(NAME) *.o

clean:
	/bin/rm -rf *.o

fclean: clean
	rm -rf $(NAME)
	
re:	fclean all
