#include <string.h>
#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstr;
	char	*cpy;

	newstr = ft_newstr ((size_t)ft_strlen ((char*)s));
	cpy = newstr;
	if (!s || !newstr)
		return ((char*)0);
	while (*s)
		*(newstr++) = f(*(s++));
	return (cpy);
}
