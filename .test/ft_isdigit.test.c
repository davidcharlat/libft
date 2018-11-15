#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c);

int	main(void)
{
	int	i;
	
	i = -256;
	while (i < 257)
	{
		if ((ft_isdigit (i) && !isdigit (i)) || (!ft_isdigit (i) && isdigit (i)))
			return (++i);
		i++;
	}
	printf ("ft_isdigit OK\n");
	return (0);
}
