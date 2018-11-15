#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int	main(void)
{
	int	i;
	
	i = 0;
	while (i < 256)
	{
		if (ft_tolower (i) != tolower (i))
			return (i);
		i++;
	}
	printf ("ft_tolower OK\n");
	return (0);
}
