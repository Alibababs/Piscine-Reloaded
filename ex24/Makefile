NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror

INCLUDES = ./includes

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: ${NAME}

${NAME}:
	${CC} ${FLAGS} -c ${SRCS} -I ${INCLUDES}
	ar rc ${NAME} ${OBJ}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all
