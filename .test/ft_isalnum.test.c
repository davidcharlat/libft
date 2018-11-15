#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c);

int	main(void)
{
	int	i;
	
	i = -256;
	while (i < 257)
	{
		if ((ft_isalnum (i) && !isalnum (i)) || (!ft_isalnum (i) && isalnum (i)))
			return (++i);
		i++;
	}
	printf ("ft_isalnum OK\n");
	return (0);
}
