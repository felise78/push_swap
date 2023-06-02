# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 13:18:42 by hemottu           #+#    #+#              #
#    Updated: 2023/06/01 17:47:40 by hemottu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = clang
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf
SRC = 	main.c \
		parsing.c \
		stacks.c \
		actions/swap.c \
		actions/rotate.c \
		actions/revrotate.c \
		actions/push.c \
		sort_small.c \
		push_smaller.c \
		sort_big.c \
		sort_med.c \
		sort_by_cost.c \
		is_sorted.c \
		utils.c \
		index.c


OBJ = $(SRC:.c=.o)

LIBFT = ./Libft/libft.a

all: $(NAME) 

bonus: $(NAME_BONUS)

$(LIBFT): 
	$(MAKE) -C ./Libft	

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(SRC) $(CFLAGS) -ILibft/ -LLibft/ -lft -o $(NAME) 

clean:
	$(RM) $(OBJ) $(OBJS_BONUS)
	make clean -C Libft

fclean:	clean
	$(RM) $(NAME) $(NAME_BONUS) $(LIBFT)

re: fclean all

.PHONY:	all re clean fclean bonus
