#include <unistd.h>

void	ft_putnbr(int n)
{
	int 		sign;
	long long 	abs_nb;
	char		digit;
	
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		write (1, "-", 1);
	}
	abs_nb = (long long)sign * (long long)n;
	if (abs_nb >= 10)
	{
		ft_putnbr (abs_nb / 10);
		ft_putnbr (abs_nb % 10);
	}
	else
	{
		digit = ('0' + abs_nb);
		write (1, &digit, 1);
	}
}
