#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		src_lenght;
	int		cursor;
	char	*new_str;
	
	if (s == NULL)
		return (NULL);
	src_lenght = 0;
	cursor = 0;
	while (s[src_lenght])
		src_lenght++;
	new_str = (char*)malloc(sizeof(*s) * (src_lenght + 1));
	if (new_str)
	{
		cursor = 0;
		while (cursor <= src_lenght)
		{
			new_str[cursor] = s[cursor];
			cursor++;
		}
		return (new_str);
	}
	return (NULL);
}
