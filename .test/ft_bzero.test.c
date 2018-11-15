#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);

int		main(void)
{
	int	tab[2] = {1299345674, 21353513};

	ft_bzero ((void*)&tab[0], 0);
	if (tab[0] != 1299345674)
		return (1);
	ft_bzero ((void*)&tab[1], 3);
	if (tab[1] != 16777216)
		return (2);
	if (tab[0] != 1299345674)
		return (3);
	printf ("ft_bzero OK\n");
	return (0);
}
