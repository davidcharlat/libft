#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memalloc(size_t size);
char	*ft_newstr(size_t size);

int		main (void)
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
	ptr = ft_newstr (100);
	i = 0;
	while (i <= 100)
	{
		if (ptr[i++])
			return (i);
	}
	i = 0;
	while (i < 10)
	{
		ptr[i] = 'a' + i;
		i++;
	}
	if (strcmp (ptr, "abcdefghij"))
		return (101);
	free (ptr);
	printf ("ft_newstr OK\n");
	return (0);
}
