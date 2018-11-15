#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	cursor;
	size_t	counter_char;
	size_t	needle_lenght;

	cursor = 0;
	needle_lenght = 0;
	if (!needle)
		return ((char*)0);
	if (!(*needle))
		return ((char*)haystack);
	while (*(needle + needle_lenght))
		needle_lenght++;
	while (*(haystack + cursor) && cursor + needle_lenght <= n)
	{
		counter_char = 0;
		while (haystack[cursor + counter_char] == needle[counter_char])
		{
			counter_char++;
			if (counter_char == needle_lenght)
				return ((char*)(haystack + cursor));
		}
		cursor++;
	}
	return ((char*)0);
}
