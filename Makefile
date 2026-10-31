NAME = libpushswap.a
CC = cc 
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f 

SRC = swap_content.c swap_a.c ft_lstlast.c ft_lstadd_front.c ft_lstdellast.c \
	ft_lstlast.c rotate_a.c swap_b.c swap_s.c ft_lstnew.c rotate_a.c rotate_b.c \
	rotate_r.c r_rotate_a.c ft_lstadd_back.c r_rotate_a.c r_rotate_b.c r_rotate_r \
	
OBJ = $(SRC:.c=.o)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $?

%.o:%.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all