#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle);

int		main(void)
{
	char	mem[] = "bacababacabababacabagh";
	char	find1[] = "";
	char	*test;
	char	*real_test;

	test = ft_strstr (mem, "babacab");
	if (test != &mem[4])
		return (1);
	test = ft_strstr (mem, "f");
	if (test != NULL)
		return (2);
	test = ft_strstr (mem, "");
	if (test != mem)
		return (3);
	test = ft_strstr (find1, "");
	real_test = strstr (find1, "");
	if (test != real_test)
		return (4);
	test = ft_strstr (mem, "\0");
	real_test = strstr (mem, "\0");
	if (test != real_test)
		return (5);
	printf ("ft_strstr OK\n");
	return (0);
}
