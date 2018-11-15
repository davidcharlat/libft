#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

int		main(void)
{
	char	dest[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
	char	src[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
	void	*test;

	test = ft_memccpy (&dest[1], src, 'B', 5);
	if ((char*)test != &dest[3])
		return (1);
	if (dest[0] != 'a')
		return (2);
	if (dest[1] != 'A')
		return (3);
	if (dest[2] != 'B')
		return (4);
	if (dest[3] != 'd')
		return (5);
	test = ft_memccpy (dest, src, 'Z', 4);
	if (test != NULL)
		return (6);
	if (dest[0] != 'A' || dest[2] != 'C' || dest[3] != 'D' || dest[1] != 'B')
		return (7);
	if (dest[4] != 'e')
		return (8);
	test = ft_memccpy (&dest[5], src, 'B', 0);
	if (dest[5] != 'f')
		return (9);
	if (test != NULL)
		return (10);
	printf ("ft_memccpy OK\n");
	return (0);
}
