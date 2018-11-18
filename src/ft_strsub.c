#include <string.h>
#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*newstr;

	newstr = ft_newstr (len);
	if (!s || !newstr)
		return (NULL);
	*(newstr + len) = 0;
	while (len)
	{
		len--;
		*(newstr + len) = *(s + start + len);
	}
	return (newstr);
}
