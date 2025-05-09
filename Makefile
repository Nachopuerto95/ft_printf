CC = cc
CFLAGS = -Wall -Wextra -Werror -g3 -I.
SRC = ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putnbr.c ft_putnbr_u.c ft_putstr.c 
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

$(NAME): $(OBJ)
	@ar rcs $(NAME) $^

test: main.o $(NAME)
	$(CC) $(CFLAGS) $^ -o tester 
	./tester
	rm -rf tester.a 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJ) $(BONUSOBJ)

fclean: clean
	rm -f $(NAME) 

re: fclean all
	
all: $(NAME)

