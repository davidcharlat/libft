#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int	main(void)
{
	int	i;
	
	i = 0;
	while (i < 256)
	{
		if (ft_toupper (i) != toupper (i))
			return (i);
		i++;
	}
	printf ("ft_toupper OK\n");
	return (0);
}
