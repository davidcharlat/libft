#include <string.h>
#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	char	*newstr;
	int		len;
	int		i;
	
	i = 0;
	if (!s)
		return (NULL);	
	len = (int)ft_strlen ((char*)s);
	while (--len >= 0 && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'));
	while ((*s == ' ' || *s == '\n' || *s == '\t') && len >= 0)
	{
		len--;
		s++;
	}
	newstr = ft_newstr (len + 1);
	if (!newstr)
		return (NULL);
	*(newstr + len + 1) = 0;
	while (len >= i)
	{
		*(newstr + i) = *(s + i);
		i++;
	}
	return (newstr);
}
