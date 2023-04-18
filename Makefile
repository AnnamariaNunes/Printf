NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c	ft_putnbr.c ft_puthex.c \
	ft_putstr.c ft_putaddress.c ft_unsgint.c 

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	ar -crs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all	

.PHONY = all clean fclean re