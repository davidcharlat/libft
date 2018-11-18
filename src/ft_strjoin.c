#include <string.h>
#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;
	char	*cpy;

	news = ft_newstr ((size_t)(ft_strlen ((char*)s1) + ft_strlen ((char*)s2)));
	cpy = news;
	if (!news)
		return (NULL);	
	if (s1)
	{
		while (*s1)
			*(news++) = *(s1++);
	}
	if (s2)
	{
		while (*s2)
			*(news++) = *(s2++);
	}
	*news = 0;
	return (cpy);
}
