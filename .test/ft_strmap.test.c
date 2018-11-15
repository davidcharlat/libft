#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char));

int		main (void)
{
	char	*ptr;	
	char	s[] = "jiop";
	char	nextchar(char c)
	{
		c++;
		return (c);
	}
	ptr = ft_strmap (NULL, &nextchar);
	ptr = ft_strmap (s, &nextchar);
	if (strcmp (ptr, "kjpq"))
		return (1);
	free (ptr);
	printf ("ft_strmap OK\n");
	return (0);
}
