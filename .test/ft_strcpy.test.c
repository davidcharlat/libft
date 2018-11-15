#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, const char *src);

int     main()
{
	void    assertStringEqual(char *expected, char *received)
	{
		int	cursor;

		cursor = 0;
		while (*(expected + cursor) != '\0' && *(expected + cursor) == *(received + cursor))
				cursor++;
		if (*(expected + cursor) != *(received + cursor))
			    exit(1);
	}
	char	src[] = "hello world";
	char	dest[] = "hello everybody";
	char	*cpy;

	cpy = ft_strcpy(dest, src);
	assertStringEqual (src, dest);
	if (cpy != dest)
		return (2);
	printf("ft_strcpy OK\n");
	return (0);
}
