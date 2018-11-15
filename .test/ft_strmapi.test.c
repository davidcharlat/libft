#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int		main (void)
{
	char	s[] = "jiop";
	char	*ptr;
	char	nextchari(unsigned int index, char c)
	{
		c = c + index;
		return (c);
	}
	ptr = ft_strmapi (NULL, &nextchari);
	ptr = ft_strmapi (s, &nextchari);
	if (strcmp (ptr, "jjqs"))
		return (1);
	free (ptr);
	printf ("ft_strmapi OK\n");
	return (0);
}
