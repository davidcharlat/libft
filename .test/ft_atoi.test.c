#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr);

int	main(void)
{
	if (ft_atoi ("1427512") != atoi ("1427512"))
		return (1);
	if (ft_atoi ("-1427512") != atoi ("-1427512"))
		return (2);
	if (ft_atoi ("  +1427512") != atoi ("  +1427512"))
		return (3);
	if (ft_atoi ("14275g12") != atoi ("14275g12"))
		return (4);
	if (ft_atoi (" -hg1427512") != atoi (" -hg1427512"))
		return (5);
	if (ft_atoi ("1 427512") != atoi ("1 427512"))
		return (6);
	if (ft_atoi ("abgv") != atoi ("abgv"))
		return (7);
	if (ft_atoi (" 000007 ") != atoi (" 000007 "))
		return (8);
	if (ft_atoi ("0000000000000007") != atoi ("0000000000000007"))
		return (9);
	if (ft_atoi ("000000000000000000000000000000000007") != atoi ("000000000000000000000000000000000007"))
		return (10);
	if (ft_atoi ("142+7512") != atoi ("142+7512"))
		return (11);
	if (ft_atoi ("142-7512") != atoi ("142-7512"))
		return (12);
	if (ft_atoi ("142jhfreu") != atoi ("142jhfreu"))
		return (13);
	printf ("ft_atoi OK\n");
	return (0);
}
