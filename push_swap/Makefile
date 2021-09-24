# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/21 12:36:51 by krisocam          #+#    #+#              #
#    Updated: 2021/09/23 19:51:57 by krisocam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

SRC			= b_function2.c	check_order.c function1.c function4.c send_b_a.c\
				sort_3sol.c sort_b.c utils.c b_functions.c count_ra_rra.c\
				function2.c main.c sort_100.c sort_500.c sort_max.c\
				check_digit.c free.c function3.c search.c sort_3num.c\
				sort_5num.c sort_util.c

PATHSRCS	= srcs

INCLUDE		= includes

FLAGS		= -Wall -Werror -Wextra

SRCS 		= $(addprefix $(PATHSRCS)/,$(SRC))
LIBFT		= libft/libft.a

all:		$(NAME)

${NAME}:
			@(make re -C libft/)
			@(gcc ${FLAGS} ${SRCS} ${LIBFT} -o ${NAME})

clean:
			@(make clean -C ./libft/)

fclean:		clean
			@(make fclean -C ./libft/)
			@(rm -rf $(NAME))

re:     	fclean all

.PHONY: 	all clean fclean re
