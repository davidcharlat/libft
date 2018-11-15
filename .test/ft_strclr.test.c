#include <stdio.h>
#include <string.h>

void	ft_strclr(char *s);

int		main (void)
{
	char	s[] = "jiop";
	int		i;

	i = 0;
	ft_strclr (s);
	while (i <= 4)
	{
		if (s[i++])
			return (i);
	}
	printf ("ft_strclr OK\n");
	return (0);
}
