#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

int	main(void)
{
	int	i;
	
	i = -256;
	while (i < 257)
	{
		if ((ft_isalpha (i) && !isalpha (i)) || (!ft_isalpha (i) && isalpha (i)))
			return (++i);
		i++;
	}
	printf ("ft_isalpha OK\n");
	return (0);
}
