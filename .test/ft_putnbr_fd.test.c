#include "../includes/libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int			main(void)
{
	ft_putnbr_fd (0, 2);
	ft_putnbr_fd (-120, 2);
	ft_putnbr_fd (3, 2);
	ft_putnbr_fd (-2147483648, 2);
	ft_putnbr_fd (2147483647, 2);
	return (0);
}
