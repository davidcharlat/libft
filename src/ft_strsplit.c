#include <stdlib.h>

static char	*copy_wd_till_space(const char *str, int pos, char c)
{
	char *new_wd;
	int wd_len;
	
	wd_len = 0;
	while ((str[wd_len + pos]) && str[pos] != c)
		wd_len++;
	new_wd = (char*)malloc(sizeof(char) * (wd_len + 1));
	if (!new_wd)
		return (NULL);
	wd_len = 0;
	while (str[wd_len + pos] && str[wd_len + pos] != c)
	{
		new_wd[wd_len] = str[wd_len + pos];
		wd_len++;
	}
	new_wd[wd_len] = '\0';
	return (new_wd);
}

static int	is_new_wd(const char *str, int cursor, char c)
{
	int i;
	int test;
	
	i = 0;
	test = 1;
	while ((cursor - i >= 0) && (i < 1))
	{
		if (str[cursor - i] == c)
			test = 0;
		i++;
	}
	if (test == 1 && ((cursor >= 1 && str[cursor - 1] == c) || cursor == 0))
		return (1);
	return (0);
}

static int	count_wd(const char *str, char c)
{
	int cursor;
	int count;
	
	count = 0;
	cursor = 0;
	while (str[cursor])
	{
		if (is_new_wd(str, cursor++, c))
			count++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	char **tab;
	int cursor;
	int count;
	
	count = 0;
	cursor = 0;
	if (!s)
		return (NULL);
	tab = (char**)malloc(sizeof(char*) * (count_wd(s, c)) + 1);
	if (!tab)
		return (NULL);
	while (s[cursor])
	{
		if (is_new_wd(s, cursor, c))
			tab[count++] = copy_wd_till_space(s, cursor, c);
		cursor++;
	}
	tab[count] = 0;
	return (tab);
}
