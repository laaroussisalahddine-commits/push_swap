NAME = libpushswap.a
CC = cc 
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f 

SRC = utils/swap_content.c operation/swap_a.c utils/ft_lstlast.c utils/ft_lstadd_front.c utils/ft_lstdelfirst.c \
	utils/ft_lstlast.c operation/rotate_a.c operation/swap_b.c operation/swap_s.c utils/ft_lstnew.c operation/rotate_a.c operation/rotate_b.c \
	operation/rotate_r.c operation/r_rotate_a.c utils/ft_lstadd_back.c operation/r_rotate_a.c operation/r_rotate_b.c operation/r_rotate_r.c \
	operation/push_b.c operation/push_a.c utils/ft_lstsize.c simple_sort.c utils/ft_lstdellast.c medium_sort.c utils/finded.c utils/calcule_sqrt.c \
	
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

run : re
	$(CC) $(FLAGS) main.c libpushswap.a
	@$(MAKE) --no-print-directory -s clean