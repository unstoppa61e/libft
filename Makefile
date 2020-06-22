NAME = libft.a
CC = gcc
PART1 =
PART2 =
BONUS =
ADDED =
SRCS = $(PART1) $(PART2) $(BONUS) $(ADDED)
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror

PART1 +=


PART2 +=


BONUS +=


ADDED +=


all: $(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SRCS) -I libft.h
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re