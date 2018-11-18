#include "../includes/libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char			str[] = "  \t    \t\nBon\t \njour\t\n  \n     ";
	char			str2[] = "Bonjour";
	char			str3[] = "  \t\t\t   ";
	char			*r;

	ft_strtrim(NULL);
	r = ft_strtrim(str);
	if (strcmp(r, "Bon\t \njour"))
	{
		free(r);
		return (1);
	}
	free(r);
	r = ft_strtrim(str2);
    if (strcmp(r, "Bonjour") || (str2 == r))
    {
		free(r);
        return (2);
    }
    free(r);
	r = ft_strtrim(str3);
    if (strcmp(r, "") || (str3 == r))
    {
      	free(r);
        return (3);
    }
    free(r);
    printf("ft_strtrim OK\n");
	return (0);
}
