NAME = libft.a

CC = clang

CFLAGS = -Wall -Wextra -Werror -g

RM = rm -rf

SRC = ft_atoi.c \
      ft_itoa.c \
      ft_putnbr_fd.c \
      ft_strlcpy.c \
      ft_tolower.c \
      ft_bzero.c \
      ft_memchr.c \
      ft_putstr_fd.c \
      ft_strlen.c \
      ft_toupper.c \
      ft_calloc.c \
      ft_memcmp.c \
      ft_split.c \
      ft_strmapi.c \
      ft_isalnum.c \
      ft_memcpy.c \
      ft_strchr.c \
      ft_strncmp.c \
      ft_isalpha.c \
      ft_memmove.c \
      ft_strdup.c \
      ft_strnstr.c \
      ft_isascii.c \
      ft_memset.c \
      ft_striteri.c \
      ft_strrchr.c \
      ft_isprint.c \
      ft_putendl_fd.c \
      ft_strlcat.c \
      ft_substr.c \
      ft_isdigit.c \
      ft_putchar_fd.c \
      ft_strjoin.c \
      ft_strtrim.c \
      ft_lstnew.c \
      ft_lstadd_front.c \
      ft_lstsize.c \
      ft_lstlast.c \
      ft_lstadd_back.c \
      ft_lstdelone.c \
      ft_lstclear.c \
      ft_lstiter.c \
      ft_lstmap.c \
      ft_printf/ft_printf.c \
      ft_printf/utils/ft_ptr.c \
      ft_printf/utils/ft_putchar.c \
      ft_printf/utils/ft_putnbr.c \
      ft_printf/utils/ft_putnbr_hexa.c \
      ft_printf/utils/ft_putnbr_u.c \
      ft_printf/utils/ft_putstr.c \
      gnl/get_next_line.c \
      gnl/get_next_line_utils.c \
      ft_swap.c \
      ft_sort_int_tab.c \
      ft_copytab.c 

      
OBJ = $(SRC:.c=.o)

AR = ar rcs #rcs replace create sort

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : 	fclean all

.PHONY: bonus all clean fclean re
