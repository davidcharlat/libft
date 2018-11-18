#include "../includes/libft.h"
#include <string.h>
#include <stdio.h>

int		ft_strnequ(const char *s1, const char *s2, size_t n);

int		main (void)
{
	int	ret;

	ft_strnequ(NULL, NULL, 0);
	ft_strnequ(NULL, NULL, 1);
	ft_strnequ(NULL, "", 1);
	ft_strnequ("", NULL, 1);
	ret = 0;
	if ((ret = ft_strnequ("abc", "abc", 2)) != 1)
		return (1);
	if ((ret = ft_strnequ("cba", "abc", 2)) != 0)
		return (2);
	if ((ret = ft_strnequ("abc", "cba", 2)) != 0)
		return (3);
	if ((ret = ft_strnequ("abc", "abd", 2)) != 1)
		return (4);
	if ((ret = ft_strnequ("", "", 3)) != 1)
		return (5);
	printf ("ft_strnequ OK\n");
	return (0);
}
