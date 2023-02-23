NAME=bsq 
FLAGS=-Wall -Werror -Wextra
SRC=algomap.c file.c main.c s_map.c strings.c validation.c
SRCS=${addprefix src/, ${SRC}}
OBJS=${SRCS:.c=.o}

all: ${NAME} 

%.o: %.c
	cc ${FLAGS} -c -I ./include $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	cc ${FLAGS} ${OBJS} -I ./include -o ${NAME}

clean:
	rm ${OBJS}

fclean: clean
	rm ${NAME}

re: fclean all


	
