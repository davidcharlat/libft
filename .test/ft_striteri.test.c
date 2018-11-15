#include <stdio.h>
#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

int		main (void)
{
	char	s[] = "jiop";
	void	nextchari(unsigned int index, char *c)
	{
		(*c) = *c + index;
	}
	ft_striteri (NULL, &nextchari);
	ft_striteri (s, &nextchari);
	if (strcmp(s, "jjqs"))
		return (1);
	printf ("ft_striteri OK\n");
	return (0);
}
