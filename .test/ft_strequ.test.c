#include "../includes/libft.h"
#include <string.h>
#include <stdio.h>

int		ft_strequ(const char *s1, const char *s2);

int		main (void)
{
	int	ret;

	ft_strequ(NULL, NULL);
	ft_strequ(NULL, "");
	ft_strequ("", NULL);
	ret = 0;
	if ((ret = ft_strequ("abc", "abc")) != 1)
		return (1);
	if ((ret = ft_strequ("cba", "abc")) != 0)
		return (2);
	if ((ret = ft_strequ("", "abd")) != 0)
		return (3);
	if ((ret = ft_strequ("", "")) != 1)
		return (4);
	if ((ret = ft_strequ("cba", "cbaz")) != 0)
		return (5);
	if ((ret = ft_strequ("abdf", "abd")) != 0)
		return (6);
	printf ("ft_strequ OK\n");
	return (0);
}
