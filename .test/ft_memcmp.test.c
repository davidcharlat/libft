#include <stdio.h>
#include <string.h>

int	ft_memcmp(void *s1, void *s2, size_t n);

int		main(void)
{
	char	mem[8] = "abcdabce";
	int		test;

	test = ft_memcmp (&mem[4], mem, 3);
	if (test != 0)
		return (1);
	test = ft_memcmp (&mem[4], mem, 4);
	if (test <= 0)
		return (2);
	test = ft_memcmp (&mem[3], mem, 0);
	if (test != 0)
		return (3);
	test = ft_memcmp (mem, &mem[4], 4);
	if (test >= 0)
		return (4);
	printf ("ft_memcmp OK\n");
	return (0);
}
