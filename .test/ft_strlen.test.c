#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

int		main(void)
{
	char	mem[8] = "abcdabc";
	size_t	test;

	test = ft_strlen (mem);
	if (test != 7)
		return (1);
	test = ft_strlen (&mem[7]);
	if (test)
		return (2);
	printf ("ft_strlen OK\n");
	return (0);
}
