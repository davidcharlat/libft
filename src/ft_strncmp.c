#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t cursor;

	cursor = 0;
	while (*(s1 + cursor) && *(s1 + cursor) == *(s2 + cursor) && cursor < n)
	{
	if (cursor == n - 1)
		return (0);
	cursor ++;
	}
	if (n)
		return ((int)*(s1 + cursor) - (int)*(s2 + cursor));
	return (0);
}
