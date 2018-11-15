#include <stdio.h>
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2);

int	main(void)
{
	if (ft_strcmp ("abcd", "abcd") != 0)
		return (1);
	if (ft_strcmp ("abcd", "abc") * strcmp ("abcd", "abc") <= 0)
		return (2);
	if (ft_strcmp ("abcd", "") * strcmp ("abcd", "") <= 0)
		return (3);
	if (ft_strcmp ("", "") != 0)
		return (4);
	if (ft_strcmp ("", "abc") * strcmp ("", "abc") <= 0)
		return (5);
	if (ft_strcmp ("abcd", "abcde") * strcmp ("abcd", "abcde") <= 0)
		return (6);
	printf ("ft_strcmp OK\n");
	return (0);
}
