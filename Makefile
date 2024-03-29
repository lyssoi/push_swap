NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
SRCS = push_swap.c\
		parse.c\
		push_swap_atoi.c\
		commands.c\
		commands2.c\
		commands3.c\
		operations.c\
		ft_queue.c\
		sort.c\
		smallcase.c
OBJS = $(SRCS:.c=.o)
SUBDIRS = libft
MAKE = make

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c  $< -o $@

$(NAME) : $(OBJS)
	make -C $(SUBDIRS)
	cp $(SUBDIRS)/libft.a $(NAME)
	$(CC) $(CFLAGS) -I. $(OBJS)  -o $(NAME)  -lft -L$(SUBDIRS)

clean:
	make -C $(SUBDIRS) clean
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(SUBDIRS)/libft.a
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus