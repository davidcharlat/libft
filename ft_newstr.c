#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_newstr (size_t size)
{
	return ((char*)ft_memalloc (sizeof(char) * (size + 1)));
}
