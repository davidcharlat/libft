#include <stdio.h>
#include <string.h>

void	*ft_memchr(void *s, int c, size_t n);

int		main(void)
{
	unsigned char	mem[8] = "abcdeagh";
	void			*test;

	test = ft_memchr (&mem[1], 'a', 6);
	if ((unsigned char*)test != &mem[5])
		return (1);
	test = ft_memchr (mem, 'f', 6);
	if (test != NULL)
		return (2);
	test = ft_memchr (mem, 'a', 7);
	if ((unsigned char*)test != mem)
		return (3);
	printf ("ft_memchr OK\n");
	return (0);
}
