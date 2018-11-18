#include "../includes/libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len);

int		main(void)
{
	char	*ret;
	char	str[] = "*Hello*";

	ft_strsub(NULL, 0, 0);
	ft_strsub(NULL, 1, 0);
	ft_strsub(NULL, 1, 1);
	ft_strsub(NULL, 0, 1);
	ret = ft_strsub(str, 1, 5);
	if (strcmp(ret, "Hello") != 0)
	{
		free (ret);
		return (1);
	}
	ret = ft_strsub(str, 3, 1);
    if (strcmp(ret, "l") != 0)
	{
		free (ret);
		return (2);
	}
	free (ret);
	printf ("ft_strsub OK\n");
	return (0);
}
