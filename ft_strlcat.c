#include <string.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	cursor;
	size_t	dest_lenght;
	size_t	src_lenght;

	cursor = 0;
	dest_lenght = 0;
	src_lenght = 0;
	if (!src || !size)
		return (0);
	while (dest[dest_lenght])
		dest_lenght++;
	while (src[src_lenght])
		src_lenght++;
	while ((src[cursor]) && (cursor < size - 1))
	{	
		dest[dest_lenght + cursor] = src[cursor];
		cursor++;
	}
	dest[dest_lenght + cursor] = 0;
	return (dest_lenght + cursor);	
}
