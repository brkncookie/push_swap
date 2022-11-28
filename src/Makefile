SRCS = instructions.c instructions1.c instructions2.c parser.c push_swap.c salgos.c utils.c utils1.c
OBJS = ${SRCS:.c=.o}
bSRCS = bsrc/instructions.c bsrc/instructions1.c bsrc/instructions2.c parser.c bsrc/checker.c utils.c utils1.c bsrc/get_next_line.c bsrc/get_next_line_utils.c
bOBJS = ${bSRCS:.c=.o}
NAME = push_swap
bNAME = checker 
INC = bsrc/checker.h
LIB = ft_printf/libftprintf.a
CC = cc
CFLAGS =  -Wall -Wextra -Werror -g
RM = rm -vf
MK =  make --directory=ft_printf/


all: $(NAME)
bonus: $(bNAME)
$(NAME): $(OBJS) $(LIB)
	$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(NAME) 
$(bNAME): $(bOBJS) $(LIB)
	$(CC) $(CFLAGS) $(bOBJS) $(LIB) -o $(bNAME) 
%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@
$(LIB):
	$(MK)
clean:
	$(RM) $(OBJS) $(bOBJS) 
	$(MK) clean
fclean:
	$(RM) $(NAME) $(OBJS) $(bOBJS) $(bNAME)
	$(MK) fclean
re: fclean all
.PHONY: fclean all re clean
