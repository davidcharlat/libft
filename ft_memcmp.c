#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{	
	while (n)
	{
		n--;
		if (((unsigned char*)s1)[n] != ((unsigned char*)s2)[n])
			return (((unsigned char*)s1)[n] - ((unsigned char*)s2)[n]);
	}
	return (0);
}
