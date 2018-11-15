#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	if (ft_strncmp ("abcd", "abcd", 10) != 0)
		return (1);
	if (ft_strncmp ("abcd", "abc", 4) * strncmp ("abcd", "abc", 4) <= 0)
		return (2);
	if (ft_strncmp ("abcd", "", 2) * strncmp ("abcd", "", 2) <= 0)
		return (3);
	if (ft_strncmp ("", "", 2) != strncmp ("", "", 2))
		return (4);
	if (ft_strncmp ("", "abc", 3) * strncmp ("", "abc", 3) <= 0)
		return (5);
	if (ft_strncmp ("abcd", "abcde", 5) * strncmp ("abcd", "abcde", 5) <= 0)
		return (6);
	if (ft_strncmp ("abcd", "abcd", 2) != 0)
		return (7);
	if (ft_strncmp ("abcd", "abchfgr", 3) != 0)
		return (8);
	if (ft_strncmp ("scd", "jug", 0) != strncmp ("scd", "jug", 0))
		return (9);
	printf ("ft_strncmp OK\n");
	return (0);
}
