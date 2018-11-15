#include <string.h>

char	*ft_strncat (char *dest, const char *src, size_t n)
{
	size_t	cursor;
	size_t	dest_lenght;

	cursor = 0;
	dest_lenght = 0;
	if (!src)
		return (dest);	
	while (dest[dest_lenght])
		dest_lenght++;
	while (src[cursor] && cursor < n)
	{	
		dest[dest_lenght+cursor] = src[cursor];
		cursor++;
	}
	dest[dest_lenght+cursor] = 0;
	return (dest);
}
