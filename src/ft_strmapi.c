#include <string.h>
#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstr;

	i = 0;
	newstr = ft_newstr ((size_t)ft_strlen ((char*)s));
	if (!s || !newstr)
		return ((char*)0);
	while (s[i])
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	return (newstr);
}
