#include <string.h>
#include <stdlib.h>

void	*ft_memalloc (size_t size)
{
	void	*temp;
	
	temp = malloc (size);
	if (!temp)
		return (temp);
	while (size)
		((char*)temp)[--size] = 0;
	return (temp);
}
