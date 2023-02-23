SRC			= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS		= ${addprefix ./srcs/, ${SRC}}
OBJS		= ${SRCS:.c=.o}
NAME 		= libft.a

all: ${NAME}

%.o: %.c
	cc -Wall -Wextra -Werror -c -I ./includes/ $< -o ${<:.c=.o}
${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS} 
	ranlib libft.a
clean:
	rm ${OBJS}
fclean: clean
	rm  ${NAME}
re: fclean all
.PHONY: all clean fclean re
