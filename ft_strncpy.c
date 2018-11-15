#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t cursor;

	cursor = 0;
	if (!src)
		return (NULL);
	while (src[cursor] && (cursor < n))
	{
		dest[cursor] = src[cursor];
		cursor++;
	}
	while (cursor < n)
		dest[cursor++] = '\0';
	return (dest);
}
