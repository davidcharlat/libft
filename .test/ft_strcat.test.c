#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, const char *src);

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
	cpy = ft_strcat (dest, &src[5]);
	assertStringEqual (cpy, src, 1);
	assertStringEqual (&cpy[12], "ody", 2);
	if (cpy != dest)
		return (3);
	cpy = ft_strcat (dest, NULL);
	if (cpy != dest)
		return (4);
	assertStringEqual (cpy, src, 5);
	printf("ft_strcat OK\n");
	return (0);
}
