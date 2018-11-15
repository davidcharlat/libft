#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int		main(void)
{
	int		dest[4] = {1999345674, 1921353514, 1111111111, 17};
	int		src[4] = {42, 84, 0, 69};
	void	*test;

	test = ft_memcpy (&dest[1], src, sizeof(int) * 2);
	if ((int*)test != &dest[1])
		return (1);
	if (dest[0] != 1999345674)
		return (2);
	if (dest[1] != 42 || dest[2] != 84)
		return (3);
	if (dest[3] != 17)
		return (4);
	printf ("ft_memcpy OK\n");
	return (0);
}
