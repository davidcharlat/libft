#include <stdlib.h>
#include <string.h>

char	*ft_newstr(size_t size);

static size_t	nlenght (long long n)
{
	size_t 		nlen;

	nlen = 1;
	if (n < 0)
	{
		nlen++;
		n = -n;
	}
	while (n / 10)
	{
		n = n / 10;
		nlen++;
	}
	return (nlen);
}

char	*ft_itoa (int n)
{
	char	*ret;
	char 	*cpy;
	long long	nb;
	
	nb = (long long)n;
	ret = ft_newstr (nlenght (nb));
	cpy = ret;
	if (!ret)
		return (NULL);
	if (nb < 0)
		*ret = '-';
	ret += nlenght (nb) - 1;
	if (nb < 0)
		nb = -nb;
	if (nb == 0)
		*ret = '0';
	while (nb)
	{
		 *ret = (nb % 10) + '0';
		 nb = nb / 10;
		 ret--;		
	}
	return (cpy);
}
