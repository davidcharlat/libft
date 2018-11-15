#include <stdlib.h>
#include <stdio.h>

void	ft_memdel (void **ap);

int		main (void)
{
	void	*ptr;
	ptr = malloc(12);
	ft_memdel(&ptr);
	if (ptr)
		return (1);
	printf ("ft_memdel OK\n");
	return (0);
}
