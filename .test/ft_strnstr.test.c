#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n);

int		main(void)
{
	char	mem[] = "bacababacabababacabagh";
	char	*test;

	test = ft_strnstr (mem, "babacab", 32);
	if (test != &mem[4])
		return (1);
	test = ft_strnstr (mem, "f", 32);
	if (test != NULL)
		return (2);
	test = ft_strnstr (mem, "", 3);
	if (test != mem)
		return (3);
	test = ft_strnstr (mem, "bab", 6);
	if (test != NULL)
		return (4);
	printf ("ft_strnstr OK\n");
	return (0);
}
