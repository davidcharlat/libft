#include <string.h>

int		ft_strcmp(const char *s1, const char *s2);

int		ft_strequ(const char *s1, const char *s2)
{
	return (ft_strcmp (s1, s2)? 0: 1);
}
