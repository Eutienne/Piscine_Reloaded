# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: eutrodri <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/13 11:32:19 by eutrodri      #+#    #+#                  #
#    Updated: 2019/01/14 21:56:27 by eutrodri      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file 

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) main.c

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re:	fclean all
