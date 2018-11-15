#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int		main(void)
{
	char	tab[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
	void	*test;

	test = ft_memmove (&tab[3], &tab[1], 2);
	if ((char*)test != &tab[3])
		return (1);
	if (tab[2] != 'c')
		return (2);
	if (tab[4] != 'c' || tab[3] != 'b')
		return (3);
	if (tab[5] != 'f')
		return (4);
	test = ft_memmove (&tab[1], &tab[4], 4); //abcbcfgh -> acfghfgh
	if (tab[0] != 'a')
		return (5);
	if ((char*)test != &tab[1])
		return (6);
	if (tab[1] != 'c' || tab[2] != 'f' || tab[3] != 'g' || tab[4] != 'h')
		return (7);
	if (tab[5] != 'f')
		return (8);
	printf ("ft_memmove OK\n");
	return (0);
}
