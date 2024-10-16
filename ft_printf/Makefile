CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
NAME = libftprintf.a
SRCS = 
	

OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean :
	rm -f $(OBJS) $(OBJBS)

fclean : clean
	rm -f $(NAME)

re : fclean all


.PHONY: all bonus clean fclean re
