NAME = libft.a

SRCPATH = ./

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
			ft_strmapi.c 
			
FLAGS = -Wall -Wextra -Werror

OBJS = $(SRCFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	
$(OBJS):
	gcc -c $(FLAGS) $(SRCFILES)
	
clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all