#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkellehe <jkellehe@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/18 15:10:56 by jkellehe          #+#    #+#              #
#    Updated: 2018/06/22 12:49:12 by jkellehe         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRC = ./*.c
OBJ = ./*.o

all: $(NAME)

$(NAME):
	@gcc -Wextra -Werror -Wall -c -I $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean clean $(NAME)