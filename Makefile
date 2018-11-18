NAME = libft.a

SRCPATH = ./src/

ODIR = ./bin/

TESTDIR = ./.test/

SRCFILES =	ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strlen.c \
			ft_strdup.c \
			ft_strcpy.c \
			ft_strncpy.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_memalloc.c \
			ft_memdel.c \
			ft_newstr.c \
			ft_strdel.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_strsub.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_strsplit.c \
			ft_itoa.c \
			
FLAGS = -Wall -Wextra -Werror -O3

OBJS = $(addprefix $(ODIR), $(SRCFILES:.c=.o))

TESTFILE = $(addprefix $(TESTDIR), $(SRCFILES:.c=.test.c)) 
TESTBIN = $(addprefix $(SRCPATH), $(SRCFILES:.c=.out))

vpath %.c src/

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(ODIR)%.o: %.c
	gcc $(FLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all

testft: $(TESTBIN)

$(TESTBIN): $(TESTFILE) lasttest $(NAME)
	gcc $(FLAGS) -L -lft $@ $< 
	./$@
	rm $@
	lasttest

lasttest:
	touch $(TESTDIR)last
