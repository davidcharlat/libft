#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

int		main(void)
{
	char	mem[] = "abcdeagh";
	char	*test;

	test = ft_strchr (&mem[1], 'a');
	if (test != &mem[5])
		return (1);
	test = ft_strchr (mem, 'f');
	if (test != NULL)
		return (2);
	test = ft_strchr (mem, 'a');
	if (test != mem)
		return (3);
	test = ft_strchr (NULL, 'f');
	if (test != NULL)
		return (4);
	test = ft_strchr (&mem[8], 'f');
	if (test != NULL)
		return (5);
	test = ft_strchr (mem, '\0');
	if (test != &mem[8])
		return (6);
	test = ft_strchr (&mem[8], '\0');
	if (test != &mem[8])
		return (7);
	printf ("ft_strchr OK\n");
	return (0);
}
