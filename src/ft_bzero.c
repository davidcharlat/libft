#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*cursor;
	
	cursor = (char*)s;
	while (n)
		cursor[--n] = 0;
}
