#include "../includes/libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char		*ret;

	ft_strjoin(NULL, NULL);
	ft_strjoin(NULL, "");
	ft_strjoin("", NULL);
	ret = ft_strjoin("Hello ", "boys");
	if (strcmp(ret, "Hello boys") != 0)
	{
		free(ret);
		return (1);
	}
	free(ret);
	ret = ft_strjoin("", "boys");
    if (strcmp(ret, "boys") != 0)
    {
        free(ret);
        return (2);
    }
    free(ret);
	ret = ft_strjoin("Hello ", "");
    if (strcmp(ret, "Hello ") != 0)
    {
        free(ret);
        return (3);
    }
    free(ret);
	ret = ft_strjoin("", "");
    if (strcmp(ret, "") != 0)
    {
        free(ret);
        return (4);
    }
    free(ret);
    printf ("ft_strjoin OK\n");
	return (0);
}
