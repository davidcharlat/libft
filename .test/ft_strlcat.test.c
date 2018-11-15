#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n);

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
	size_t	test;

	dest[5] = 0;
	test = ft_strlcat (dest, &src[5], 9);
	assertStringEqual (dest, src, 1);
	assertStringEqual (&dest[12], "ody", 2);
	if (11 != test)
		return (3);
	dest[5] = 0;
	test = ft_strlcat (dest, &src[5], 4);
	assertStringEqual (dest, "hello wo", 4);
	assertStringEqual (&dest[10], "d", 5);
	if (8 != test)
		return (6);
	test = ft_strlcat (dest, NULL, 3);
	assertStringEqual (dest, "hello wo", 7);
	printf("ft_strlcat OK\n");
	return (0);
}
