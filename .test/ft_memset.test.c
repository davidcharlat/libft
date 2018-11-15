#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);

int		main(void)
{
	char	tab[5][5] = {"toto", "tata", "titi", "tutu", "tres"};

	ft_memset ((void*)tab[2], 49, 8);
	if (strcmp (tab[2], "11111111u"))
		return (1);
	if (strcmp (tab[1], "tata"))
		return (2);	
	ft_memset ((void*)tab, 69, 22);
	if (strcmp (tab[0], "EEEEEEEEEEEEEEEEEEEEEEes"))
		return (3);
	printf ("ft_memset OK\n");
	return (0);
}
