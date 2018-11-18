#include "../includes/libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int			main(void)
{
	char		*ret;
	ret = ft_itoa(0);
	if (strcmp(ret, "0") != 0)
	{
		free(ret);
		return (1);
	}
	free(ret);
	ret = ft_itoa(-123);
	if (strcmp(ret, "-123") != 0)
	{
		free(ret);
		return (2);
	}
	free(ret);
	ret = ft_itoa(123);
	if (strcmp(ret, "123") != 0)
	{
		free(ret);
		return (3);
	}
	free(ret);
	ret = ft_itoa(-2147483648);
	if (strcmp(ret, "-2147483648") != 0)
	{
		free(ret);
		return (4);
	}
	free(ret);
	ret = ft_itoa(2147483647);
	if (strcmp(ret, "2147483647") != 0)
	{
		free(ret);
		return (5);
	}
	free(ret);
	printf ("ft_itoa OK\n");
	return (0);
}
