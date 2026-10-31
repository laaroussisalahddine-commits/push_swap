NAME = libpushswap.a
CC = cc 
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f 

SRC = swap_content.c swap_a.c ft_lstlast.c ft_lstadd_front.c ft_lstdelone.c \
	ft_lstlast.c rotate_a.c swap_b.c swap_s.c

OBJ = $(SRC:.c=.o)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $?

%.o:%.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all