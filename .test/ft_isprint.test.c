#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main(void)
{
	int	i;
	
	i = -256;
	while (i < 257)
	{
		if ((ft_isprint (i) && !isprint (i)) || (!ft_isprint (i) && isprint (i)))
			return (++i);
		i++;
	}
	printf ("ft_isprint OK\n");
	return (0);
}
