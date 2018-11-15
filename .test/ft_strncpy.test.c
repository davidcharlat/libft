#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t n);

int     main()
{
	void    assertStringEqual(char *expected, char *received, int exit_value)
	{
		int	cursor;

		cursor = 0;
		while (*(expected + cursor) && *(expected + cursor) == *(received + cursor))
				cursor++;
		if (*(expected + cursor) != *(received + cursor))
			    exit(exit_value);
	}
	char	src[] = "hello world";
	char	dest[] = "hello everybody";
	char	*cpy;

	cpy = ft_strncpy (dest, src, 10);
	assertStringEqual (dest, "hello worlybody", 1);
	if (cpy != dest)
		return (2);
	ft_strncpy (dest, src, 14);
	assertStringEqual (dest, "hello world", 3);
	assertStringEqual (&dest[11], "", 4);
	assertStringEqual (&dest[13], "", 5);
	assertStringEqual (&dest[14], "y", 6);
	printf("ft_strncpy OK\n");
	return (0);
}
