#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*cursor;
	
	cursor = (char*)s;
	while (n)
		cursor[--n] = (char)c;
	return (s);
}
