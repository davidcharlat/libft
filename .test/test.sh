errorExit()
{
  echo "$1";
  exit 1;
}

cd ./.test

for file in 'ft_newstr'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../src/$file.c ../src/ft_memalloc.c 
	./testa
	echo "->"
done
for file in 'ft_strequ' 'ft_strnequ'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../src/$file.c ../src/ft_strncmp.c ../src/ft_strcmp.c
	./testa
	echo "->"
done
for file in 'ft_strdel' 'ft_striter' 'ft_striteri' 'ft_strsplit'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../src/$file.c
	./testa
	echo "->"
done
for file in 'ft_strmap' 'ft_strmapi' 'ft_strsub' 'ft_strjoin' 'ft_strtrim' 'ft_itoa'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../src/$file.c ../src/ft_newstr.c ../src/ft_memalloc.c ../src/ft_strlen.c
	./testa
	echo "->"
done
for file in 'ft_putchar' 'ft_putstr' 'ft_putendl'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../src/$file.c
	OUTPUT="`./testa`";
	if [ "$OUTPUT" != "->
$file OK" ]
	then
		errorExit "error: received '$OUTPUT'"
	fi
	echo  "$file OK"
	echo "->"
done
for file in 'ft_putnbr'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../src/$file.c
	OUTPUT="`./testa`";
	if [ "$OUTPUT" != "0-1203-21474836482147483647" ]
	then
		errorExit "error: received '$OUTPUT'"
	fi
	echo  "$file OK"
	echo "->"
done
for file in 'ft_putchar_fd' 'ft_putstr_fd' 'ft_putendl_fd'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../src/$file.c
	OUTPUT=$(./testa 2>&1);
	if [ "$OUTPUT" != "->
$file OK" ]
	then
		errorExit "error: received '$OUTPUT'"
	fi
	echo  "$file OK"
	echo "->"
done
for file in 'ft_putnbr_fd'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../src/$file.c
	OUTPUT=$(./testa 2>&1);
	if [ "$OUTPUT" != "0-1203-21474836482147483647" 2>&1 ]
	then
		errorExit "error: received '$OUTPUT'"
	fi
	echo  "$file OK"
	echo "->"
done
for file in 'ft_lstnew'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../src/$file.c ../src/ft_memcpy.c
	./testa
	echo "->"
done
for file in 'ft_lstdel'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../src/$file.c ../src/ft_memcpy.c ../src/ft_lstnew.c
	OUTPUT=$(./testa);
	if [ "$OUTPUT" != "delone delone " ] && [ "$OUTPUT" != "delone delone delone " ]
	then
		errorExit "error: received '$OUTPUT'"
	fi
	echo  "$file OK"
	echo "->"
done
for file in 'ft_lstiter'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../src/$file.c ../src/ft_memcpy.c ../src/ft_lstnew.c
	OUTPUT="`./testa`";
	if [ "$OUTPUT" != "->
$file OK" ]
	then
		errorExit "error: received '$OUTPUT'"
	fi
	echo  "$file OK"
	echo "->"
done
for file in 'ft_lstdelone' 'ft_lstadd' 'ft_lstmap'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../src/$file.c ../src/ft_memcpy.c ../src/ft_lstnew.c
	./testa
	echo "->"
done
for file in 'ft_memset' 'ft_bzero' 'ft_memcpy' 'ft_memccpy' 'ft_memmove' 'ft_memchr' 'ft_memcmp' 'ft_strlen' 'ft_strdup' 'ft_strcpy' 'ft_strncpy' 'ft_strcat' 'ft_strncat' 'ft_strlcat' 'ft_strchr' 'ft_strrchr' 'ft_strstr' 'ft_strnstr' 'ft_strcmp' 'ft_strncmp' 'ft_atoi' 'ft_isalpha' 'ft_isdigit' 'ft_isalnum' 'ft_isascii' 'ft_isprint' 'ft_toupper' 'ft_tolower' 'ft_memalloc' 'ft_memdel' 'get_next_line' 'get_next_line_with_lenght'
do
	gcc -o testa -Wall -Wextra -Werror $file.test.c ../src/$file.c
	./testa
	echo "->"
done
rm ./testa
