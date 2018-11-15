#include <stdio.h>
#include <string.h>

void	ft_striter(char *s, void (*f)(char *));

int		main (void)
{
	char	s[] = "jiop";
	void	nextchar(char *c)
	{
		(*c)++;
	}
	ft_striter (NULL, &nextchar);
	ft_striter (s, &nextchar);
	if (strcmp(s, "kjpq"))
		return (1);
	printf ("ft_striter OK\n");
	return (0);
}
