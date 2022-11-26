SRCS = instructions.c instructions1.c instructions2.c parser.c push_swap.c salgos.c utils.c utils1.c
OBJS = ${SRCS:.c=.o}
NAME = push_swap
INC = ../include/push_swap.h
LIB = ft_printf/libftprintf.a
CC = cc
CFLAGS =  -Wall -Wextra -Werror -g
RM = rm -vf
MK =  make --directory=ft_printf/


all: $(NAME)
$(NAME): $(OBJS) $(LIB)
	$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(NAME) 
%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@
$(LIB):
	$(MK)
clean:
	$(RM) $(OBJS)
	$(MK) clean
fclean:
	$(RM) $(NAME) $(OBJS) 
	$(MK) fclean
re: fclean all
.PHONY: fclean all re clean
