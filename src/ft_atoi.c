int	ft_atoi(const char *nptr)
{
	int	sign;
	int	nb;
	int	power;
	
	power = 1;
	sign = 0;
	nb = 0;
	while (*(nptr) == ' ')
		nptr++;
	if (*nptr == '+' || (*nptr >= '0' && *nptr <= '9'))
		sign = 1;
	if (*nptr == '-')
		sign = -1;
	while (*(++nptr) >= '0' && *nptr <= '9');
	while (*(--nptr) >= '0' && *nptr <= '9')
	{
		nb = nb + (*nptr - 48) * power;
		power *= 10;
	}
	return (sign * nb);
}

