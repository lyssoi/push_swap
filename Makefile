NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = push_swap.c\
		parse.c
OBJS = $(SRCS:.c=.o)
SUBDIRS = printf
MAKE = make

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	make -C $(SUBDIRS)
	cp $(SUBDIRS)/libftprintf.a $(NAME)
	$(CC) $(CFLAGS) -I. $(OBJS)  -o $(NAME)  -lftprintf -L$(SUBDIRS)

clean:
	make -C $(SUBDIRS) clean
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(SUBDIRS)/libftprintf.a
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus