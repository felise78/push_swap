# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 13:18:42 by hemottu           #+#    #+#              #
#    Updated: 2023/05/19 14:46:42 by hemottu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 16:54:30 by hemottu           #+#    #+#              #
#    Updated: 2023/05/12 21:27:57 by hemottu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
#NAME_BONUS = 
CC = clang
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf
SRC = 	main.c \
		error.c \
		parsing.c \
		stacks.c \
		actions/swap.c \
		actions/rotate.c \
		actions/revrotate.c \
		actions/push.c \
		sort_small.c

#SRC_BONUS = 

OBJ = $(SRC:.c=.o)

#OBJS_BONUS = $(SRC_BONUS:.c=.o)

LIBFT = Libft/libft.a

all: $(NAME) 

bonus: $(NAME_BONUS)

$(LIBFT): 
	make -C Libft	

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(SRC) $(CFLAGS) -ILibft/ -LLibft/ -lft -o $(NAME)

#$(NAME_BONUS):	$(OBJS_BONUS) $(LIBFT)
#	rm -rf $(NAME)
#	$(CC) $(SRC_BONUS) $(CFLAGS) -lX11 -lm -lXext -Iminilibx-linux/ -Lminilibx-linux/ -lmlx -o $(NAME_BONUS)

clean:
	$(RM) $(OBJ) $(OBJS_BONUS)
	make clean -C Libft

fclean:	clean
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY:	all re clean fclean bonus
