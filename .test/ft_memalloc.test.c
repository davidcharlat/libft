#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memalloc (size_t size);

int	main (void)
{
	char	*ptr;
	char	*ptr2;
	int		i;

	i = 0;
	ptr2 = (char*)malloc (1000);
	while (i < 1000)
		ptr2[i++] = 'r';
	free (ptr2);
	ptr2 = NULL;
	ptr = (char*)ft_memalloc (100);
	i = 0;
	while (i < 100)
	{
		if (ptr[i++])
			return (i);
	}
	free (ptr);
	printf ("ft_memalloc OK\n");
	return (0);
}
