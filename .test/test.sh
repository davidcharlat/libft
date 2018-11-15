for file in 'ft_memset' 'ft_bzero' 'ft_memcpy' 'ft_memccpy' 'ft_memmove' 'ft_memchr' 'ft_memcmp' 'ft_strlen' 'ft_strdup' 'ft_strcpy' 'ft_strncpy' 'ft_strcat' 'ft_strncat' 'ft_strlcat' 'ft_strchr' 'ft_strrchr' 'ft_strstr' 'ft_strnstr' 'ft_strcmp' 'ft_strncmp' 'ft_atoi' 'ft_isalpha' 'ft_isdigit' 'ft_isalnum' 'ft_isascii' 'ft_isprint' 'ft_toupper' 'ft_tolower' 'ft_memalloc' 'ft_memdel'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../$file.c
	./testa
	echo "->"
done
for file in 'ft_newstr'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../$file.c ../ft_memalloc.c 
	./testa
	echo "->"
done
for file in 'ft_strdel' 'ft_striter' 'ft_striteri'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../$file.c
	./testa
	echo "->"
done
for file in 'ft_strmap' 'ft_strmapi'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../$file.c ../ft_newstr.c ../ft_memalloc.c ../ft_strlen.c
	./testa
	echo "->"
done
