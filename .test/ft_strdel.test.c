#include <stdlib.h>
#include <stdio.h>

void	ft_strdel (char **as);

int		main (void)
{
	char	*ptr;
	ptr = (char*)malloc(12);
	ft_strdel(&ptr);
	if (ptr)
		return (1);
	printf ("ft_strdel OK\n");
	return (0);
}
