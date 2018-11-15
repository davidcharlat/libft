#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n);

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

	dest[5] = 0;
	cpy = ft_strncat (dest, &src[5], 9);
	assertStringEqual (cpy, src, 1);
	assertStringEqual (&cpy[12], "ody", 2);
	if (cpy != dest)
		return (3);
	dest[5] = 0;
	cpy = ft_strncat (dest, &src[5], 4);
	assertStringEqual (cpy, "hello wor", 4);
	assertStringEqual (&dest[10], "d", 5);
	printf("ft_strncat OK\n");
	return (0);
}
