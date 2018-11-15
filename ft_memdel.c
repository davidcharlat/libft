#include <stdlib.h>

void	ft_memdel (void **ap)
{
	free (*ap);
	*ap = (void*)0;
}
