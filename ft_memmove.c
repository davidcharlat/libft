#include <string.h>
#include <stdlib.h>

void	*ft_memmove (void *dest, const void *src, size_t n)
{
	char	*temp;
	size_t	i;

	i = n;
	temp = (char*)malloc(n * sizeof(char*));
	if (temp)
	{	
		while (n)
		{
			n--;
			temp[n] = ((char *)src)[n];
		}
		while (i)
		{
			i--;
			((char *)dest)[i] = temp[i];
		}
	free (temp);
	}
	return (dest);
}
