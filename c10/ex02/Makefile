NAME=ft_tail
FLAGS=-Wall -Wextra -Werror

all: ${NAME}

${NAME}: src/*.c
	cc src/*c ${FLAGS} -I ./include  -o ${NAME}
clean:
	rm *.o
fclean: clean
	rm ${NAME}
