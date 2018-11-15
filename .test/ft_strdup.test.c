#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s);

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
	char	*dest;
	char	*ptr;

	dest = ft_strdup(src);
	ptr = ft_strdup(NULL);
	assertStringEqual (src, dest);
	free (dest);
	if (ptr != NULL)
		return (2);
	printf("ft_strdup OK\n");
	return (0);
}
