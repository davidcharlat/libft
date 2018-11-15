#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c);

int	main(void)
{
	int	i;
	
	i = -256;
	while (i < 257)
	{
		if ((ft_isascii (i) && !isascii (i)) || (!ft_isascii (i) && isascii (i)))
			return (++i);
		i++;
	}
	printf ("ft_isascii OK\n");
	return (0);
}
