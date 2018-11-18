#include "../includes/libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static int	uf_free_tab(void **tab)
{
	unsigned int	i;

	if (tab == NULL)
		return (0);
	i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i = i + 1;
	}
	free(tab);
	return (1);
}

int			main(void)
{
	char			**ret;

	ft_strsplit(NULL, 0);
	ft_strsplit(NULL, 'a');
	ret = ft_strsplit("", '*');
	if (ret == NULL || ret[0] != NULL)
	{
		uf_free_tab((void **)ret);
		return (1);
	}
	uf_free_tab((void **)ret);
	ret = ft_strsplit("*********", '*');
	if (ret == NULL || ret[0] != NULL)
	{
		uf_free_tab((void **)ret);
		return (2);
	}
	if (uf_free_tab((void **)ret) == 0)
		return (3);
	ret = ft_strsplit("hello", '*');
	if (ret[1] != NULL || strcmp(ret[0], "hello") != 0)
	{
		uf_free_tab((void **)ret);
		return (4);
	}
	if (uf_free_tab((void **)ret) == 0)
		return (5);
	ret = ft_strsplit("*hello", '*');
	if (ret[1] != NULL || strcmp(ret[0], "hello") != 0)
	{
		uf_free_tab((void **)ret);
		return (6);
	}
	if (uf_free_tab((void **)ret) == 0)
		return (7);
	ret = ft_strsplit("*hello*", '*');
	if (ret[1] != NULL || strcmp(ret[0], "hello") != 0)
	{
		uf_free_tab((void **)ret);
		return (8);
	}
	if (uf_free_tab((void **)ret) == 0)
		return (9);
	ret = ft_strsplit("*hel*lo*", '*');
	if (ret[2] != NULL || strcmp(ret[0], "hel") != 0 || strcmp(ret[1], "lo") != 0)
	{
		uf_free_tab((void **)ret);
		return (10);
	}
	if (uf_free_tab((void **)ret) == 0)
		return (11);
	ret = ft_strsplit("*hel*lo*f", '*');
	if (ret[3] != NULL || strcmp(ret[0], "hel") != 0 || strcmp(ret[1], "lo") != 0
		|| strcmp(ret[2], "f") != 0)
	{
		uf_free_tab((void **)ret);
		return (12);
	}
	if (uf_free_tab((void **)ret) == 0)
		return (13);
	ret = ft_strsplit("g*hel*lo*f", '*');
	if (ret[4] != NULL || strcmp(ret[0], "g") != 0 || strcmp(ret[1], "hel") != 0
		|| strcmp(ret[2], "lo") != 0 || strcmp(ret[3], "f") != 0)
	{
		uf_free_tab((void **)ret);
		return (14);
	}
	if (uf_free_tab((void **)ret) == 0)
		return (15);
	ret = ft_strsplit("***hel****lo**", '*');
	if (ret[2] != NULL || strcmp(ret[0], "hel") != 0 || strcmp(ret[1], "lo") != 0)
	{
		uf_free_tab((void **)ret);
		return (16);
	}
	if (uf_free_tab((void **)ret) == 0)
		return (17);
	printf ("ft_strsplit OK\n");
	return (0);
}
