gcc -Wall -Wextra -Werror -c ft_swap.c ft_putstr.c ft_putchar.c ft_strcmp.c ft_strlen.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
rm -rf ft_putstr.o ft_putchar.o  ft_swap.o ft_strcmp.o ft_strlen.o