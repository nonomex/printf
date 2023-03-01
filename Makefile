NAME	= libftprintf.a

SRCS	= ft_printf.c \
				ft_putchar.c \
				ft_putadd.c \
				ft_putnbr.c \
				ft_putnbrbase.c \
				ft_putstr.c \
				ft_putnbruns.c \

CC 		= cc

CFLAGS	= -Wextra -Wall -Werror 

OBJS 	= $(SRCS:.c=.o)

HEADERS	= printf.h

%.o : %.c ${HEADERS} Makefile
	${CC} ${CFLAGS} -c $< -o $@ -I $(HEADERS)

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: clean re
